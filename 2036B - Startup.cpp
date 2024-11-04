#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // Include this for sorting
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        map<int, int> myMap; // Key: b[i], Value: sum of c[i]

        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            myMap[b] += c; // Add c[i] to the corresponding key b[i]
        }

        // Store the summed values in a vector
        vector<int> sortedValues;

        for (const auto& pair : myMap) {
            sortedValues.push_back(pair.second);
        }

        // Sort the values in descending order
        sort(sortedValues.rbegin(), sortedValues.rend());

        // Calculate the total for the first n values if n is within bounds
        int ans = 0;
        int limit = min(n, static_cast<int>(sortedValues.size())); // Ensure we don't exceed the size
        for (int x = 0; x < limit; x++) {
            ans += sortedValues[x];
        }

        cout << ans << endl;
    }

    return 0;
}
