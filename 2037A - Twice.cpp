#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        map<int, int> freq;
        int count = 0;
 
        // Count frequencies of each number
        for (int num : a) {
            freq[num]++;
        }
 
        // Count pairs
        for (auto& [num, frequency] : freq) {
            count += frequency / 2; // Each pair contributes 1 to the count
        }
 
        cout << count << endl;
    }
 
    return 0;
}
