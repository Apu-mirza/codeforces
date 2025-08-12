#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> s(n), t(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        s[i] %= k;
        s[i] = min(s[i], k-s[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        t[i] %= k;
        t[i] = min(t[i], k-t[i]);
    }
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if(s == t){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
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
