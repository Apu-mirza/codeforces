#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    string nString;
    cin >> nString;

    unordered_set<char> h; // Using a set for O(1) average-time complexity for lookups
    char temp;
    for (int i = 0; i < k; i++) {
        cin >> temp;
        h.insert(temp);
    }

    long long count = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        // Check if the current character is in the set
        if (h.find(nString[i]) != h.end()) {
            count++;
        } else {
            // If we hit a character that is not in 'h', we finalize the count
            ans += (count * (count + 1)) / 2;
            count = 0; // Reset count
        }
    }

    // Final count for the last segment
    ans += (count * (count + 1)) / 2;

    cout << ans << endl;
    return 0;
}
