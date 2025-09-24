#include <iostream>
#include <vector>
#include <string>
#include <functional> // for std::function


// Function to check if a string starts with a given initial
bool startsWithInitial(const std::string& str, char initial) {
    return !str.empty() && str[0] == initial;
}

// Function to print strings that satisfy the predicate and count them
std::vector<std::string> filterStrings(const std::vector<std::string>& strings, 
                     std::function<bool(const std::string&)> predicate) {
   vector<string> result;
    for (const auto& str : strings) {
        if (predicate(str)) {
            result.push_back(str);
            
        }
    }

   return result;
}

int main() {
    std::vector<std::string> strings = {
        "Bosch", "Mexico", "Mango", "Mark", "Blr", "Clean code"
    };

    char initial;
    std::cout << "Enter an initial character: ";
    std::cin >> initial;

    // Use a lambda to wrap the startsWithInitial function with the user's initial
    auto predicate = [initial](const std::string& str) {
        return startsWithInitial(str, initial);
    };

    std::vector<std::string> result = filterStrings(strings, predicate);

    std::cout << "Strings starting with '" << initial << "':\n";
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

    std::cout << "Total: " << result.size() << std::endl;

    return 0;
}
