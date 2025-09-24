#include <iostream>
#include <vector>
#include <string>
#include <functional>

// ------------------- Utility Function -------------------
bool startsWithInitial(const std::string& str, char initial) {
    return !str.empty() && str[0] == initial;
}

// ------------------- Template Function (Parametric Polymorphism) -------------------
template <typename T>
std::vector<T> filterItems(const std::vector<T>& items, std::function<bool(const T&)> predicate) {
    std::vector<T> result;
    for (const auto& item : items) {
        if (predicate(item)) {
            result.push_back(item);
        }
    }
    return result;
}

// ------------------- Main -------------------
int main() {
    std::vector<std::string> strings = {
        "Bosch", "Mexico", "Mango", "Mark", "Blr", "Clean code"
    };

    char initial;
    std::cout << "Enter an initial character: ";
    std::cin >> initial;

    // Predicate for strings starting with the given initial
    auto predicate = [initial](const std::string& str) {
        return startsWithInitial(str, initial);
    };

    // Use the template function with strings
    std::vector<std::string> result = filterItems<std::string>(strings, predicate);

    // Output results
    std::cout << "Strings starting with '" << initial << "':\n";
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

    std::cout << "Total: " << result.size() << std::endl;

    return 0;
}
