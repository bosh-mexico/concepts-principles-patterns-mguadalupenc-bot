#include <iostream>
#include <vector>
#include <string>

// Function to check if string starts with 'M'
bool startsWithM(const std::string& str) {
    return !str.empty() && str[0] == 'M';
}

// Function to print strings starting with 'M' and count them
void printAndCountMStrings(const std::vector<std::string>& strings) {
    int count = 0;
    std::cout << "Strings starting with 'M':\n";

    for (const auto& str : strings) {
        if (startsWithM(str)) {
            std::cout << str << std::endl;
            count++;
        }
    }

    std::cout << "Total strings starting with 'M': " << count << std::endl;
}

int main() {
    std::vector<std::string> strings = {
        "Mango", "Apple", "Melon", "Banana", "Monkey", "Orange"
    };

    printAndCountMStrings(strings);

    return 0;
}
