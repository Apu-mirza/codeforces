#include <bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define ll long long
const ll c=500005;
 
ll n;
ll t[c], l[c], r[c];
 
void solve() {
    ll n, k, i;
    cin >> n >> k;
    string s;
    cin>>s;
    ll z = 0;
    for(i=0; i<n; i++){
        if(s[i] == '0'){
            z++;
        }
    }
    ll m = n / 2;
    ll c = m - k;
 
    if (c < 0 || z < c || (n - z) < c || (z - c) % 2) cout << "NO\n";
    else cout << "YES\n";
}
 
int main() {
 
    ll w;
    cin >> w;
    while (w--) solve();
 
    return 0;
}
