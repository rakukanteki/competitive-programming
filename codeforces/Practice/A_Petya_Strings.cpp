#include <iostream>
#include <string>
#include <algorithm> // for transform function

int main() {
    // Input strings
    std::string string1, string2;
    std::cin >> string1 >> string2;

    std::transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    std::transform(string2.begin(), string2.end(), string2.begin(), ::tolower);

    if (string1 < string2) {
        std::cout << "-1" << std::endl;
    } else if (string1 > string2) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
