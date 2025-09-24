#include <iostream>
#include <vector>
#include <string>
#include <functional> // for std::function

// Function to print strings that satisfy the predicate and count them
void printAndCountIf(const std::vector<std::string>& strings, 
                     std::function<bool(const std::string&)> predicate) {
    int count = 0;
    std::cout << "Strings matching the condition:\n";

    for (const auto& str : strings) {
        if (predicate(str)) {
            std::cout << str << std::endl;
            count++;
        }
    }

    std::cout << "Total matching strings: " << count << std::endl;
}

int main() {
    std::vector<std::string> strings = {
        "Bosch","Mexico","Mango","Mark","Blr',"Clean code"
    };

    char initial;
    std::cout << "Enter an initial character: ";
    std::cin >> initial;

    // Lambda predicate to check if string starts with the given initial
    auto startsWithInitial = [initial](const std::string& str) {
        return !str.empty() && str[0] == initial;
    };

    printAndCountIf(strings, startsWithInitial);

    return 0;
}
