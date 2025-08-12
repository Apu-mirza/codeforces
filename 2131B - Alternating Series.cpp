#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            a[i] = -1;
        } else {
            if(i == n-1){
                a[i] = 2;
            }else{
                a[i] = 3;
            }
        }
    }
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
