#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t; // Number of test cases
    cin >> t;

    while(t--) {
        long long n; // Size of the array
        cin >> n;

        vector<long long> vect(n); // Vector to store the array elements
        for(long long i = 0; i < n; i++) {
            cin >> vect[i];
        }

        long long sum = 0; // Sum of all elements
        long long minAbs = INT_MAX; // Minimum absolute value
        long long negativeCount = 0; // Count of negative elements

        for(long long i = 0; i < n; i++) {
            sum += abs(vect[i]); // Summing absolute values
            if(vect[i] < 0) {
                negativeCount++;
            }
            minAbs = min(minAbs, abs(vect[i])); // Finding the minimum absolute value
        }

        // If there are an odd number of negative numbers, adjust the sum
        if(negativeCount % 2 != 0) {
            sum -= 2 * minAbs;
        }

        cout << sum << endl; // Output the result
    }

    return 0;
}
