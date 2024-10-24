#include <iostream>
#include <string>
 
int main() {
    std::string binaryStr;
 
    // Get user input
    std::cin >> binaryStr;
 
    size_t zeroPos = binaryStr.find('0');
    if (zeroPos != std::string::npos) {
        // Remove the first '0'
        binaryStr.erase(zeroPos, 1);
    } else {
        // Remove the first '1' if no '0' is found
        size_t onePos = binaryStr.find('1');
        if (onePos != std::string::npos) {
            binaryStr.erase(onePos, 1);
        }
    }
 
    // Output the reduced string
    std::cout << binaryStr << std::endl;
    return 0;
}
 
