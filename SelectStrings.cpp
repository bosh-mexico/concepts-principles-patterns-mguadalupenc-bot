#include <iostream>
#include <vector>
#include <string>

// Function to check if string starts with a given initial character
bool startsWithChar(const std::string& str, char initial) {
    return !str.empty() && str[0] == initial;
}

// Function to print strings starting with a given initial and count them
void printAndCountStringsStartingWith(const std::vector<std::string>& strings, char initial) {
    int count = 0;
    std::cout << "Strings starting with '" << initial << "':\n";

    for (const auto& str : strings) {
        if (startsWithChar(str, initial)) {
            std::cout << str << std::endl;
            count++;
        }
    }

    std::cout << "Total strings starting with '" << initial << "': " << count << std::endl;
}

int main() {
    std::vector<std::string> strings = {
        "Mango", "Apple", "Melon", "Banana", "Monkey", "Orange"
    };

    char initialChar;

    std::cout << "Enter the initial character to search for: ";
    std::cin >> initialChar;

    printAndCountStringsStartingWith(strings, initialChar);

    return 0;
}
