#include <iostream>
#include <vector>
#include <string>
#include <functional> // for std::function

// Function to print strings that satisfy the predicate and count them
vector<string> filterStrings(const std::vector<std::string>& strings, 
                     std::function<bool(const std::string&)> predicate) {
   vector<string> result;
    for (const auto& str : strings) {
        if (predicate(str)) {
            result.pubh_back(str);
            
        }
    }

   return result;
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

    vector<string> result=filterStrings(strings, startsWithInitial);

    return 0;
}
