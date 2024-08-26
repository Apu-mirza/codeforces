#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.length();

    // Create a new string to hold the result
    string result = n;

    // Append the reversed version of `n` to `result`
    for (int i = len - 1; i >= 0; i--) {
        result += n[i];  // This safely appends characters to `result`
    }

    cout << result << endl;  // Output the concatenated string
    return 0;
}
