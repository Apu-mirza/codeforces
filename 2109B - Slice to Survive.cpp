#include <iostream>
#include <algorithm>
using namespace std;
 
int cnt(int x) {
    if (x == 1) return 0;
    if (x & 1) return cnt(x / 2 + 1) + 1;
    else return cnt(x / 2) + 1;
}
void solve(){
        int n, m, a, b;
        cin >> n >> m >> a >> b;
 
        int res = 1e9;
 
        res = min(res, cnt(b) + cnt(n));
        res = min(res, cnt(a) + cnt(m));
        res = min(res, cnt(m - b + 1) + cnt(n));
        res = min(res, cnt(n - a + 1) + cnt(m));
 
        cout << res + 1 << '\n';
}
 
int main() {
 
    int test;
    cin >> test;
 
    while (test--) {
       solve();
    }
 
    return 0;
}
