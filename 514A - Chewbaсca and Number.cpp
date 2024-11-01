#include <iostream>
#include <string>
using namespace std;

long long subtractDigitsFromNine(long long number) {
    string num_str = to_string(number);
    long long result = 0; // To store the result

    for (size_t i = 0; i < num_str.length(); i++) {
        char digit = num_str[i];
        int digit_value = digit - '0'; // Convert char to int


        // Keep the first digit unchanged if it's 9
        if (i == 0 && digit_value == 9) {
            result = result * 10 + digit_value; // Append the unchanged digit
        } else if (digit_value > 4) {
            result = result * 10 + (9 - digit_value); // Subtract from 9
        } else {
            result = result * 10 + digit_value; // Keep the digit unchanged
        }
    }

    return result; // Return the final result
}

int main() {
    long long number;
    cin >> number;
    long long result = subtractDigitsFromNine(number);
    cout<< result << endl;
    return 0;
}
