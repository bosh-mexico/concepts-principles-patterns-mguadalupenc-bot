#include <iostream>
#include <vector>
#include <string>
#include "printString.h"

// Function to check if string starts with 'M'
bool startsWithM(const std::string& str) {
    return !str.empty() && str[0] == 'M';
}

int main() {
    std::vector<std::string> strings = {
        "Mango", "Apple", "Melon", "Banana", "Monkey", "Orange"
    };

    printAndCountMStrings(strings);

    return 0;
}
