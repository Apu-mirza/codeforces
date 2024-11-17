#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, i;
        cin >> n;
 
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int x = n - 2;
        int ans1 = -1, ans2 = -1;
 
        if (x <= 1) {
            ans1 = 1;
            ans2 = 1;
        } else {
            for (i = 2; i <= x; i++) {
                if (x % i == 0) {
                   if (i == x/i) {
                        if (count(a.begin(), a.end(), i) >= 2) {
                            ans1 = i;
                            ans2 = i;
                            break;
                        }
                    } else {
                        if (find(a.begin(), a.end(), i) != a.end() &&
                            find(a.begin(), a.end(), x/i) != a.end()) {
                            ans1 = i;
                            ans2 = x/i;
                            break;
                        }
                    }
                }
            }
        }
 
        cout << ans1 << " " << ans2 << endl;
    }
 
    return 0;
}
