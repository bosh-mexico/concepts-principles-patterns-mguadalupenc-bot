#include <iostream>
#include <vector>

#include "printString.h"

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
