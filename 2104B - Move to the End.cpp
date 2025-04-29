#include <bits/stdc++.h>
using namespace std;
#ifdef DEBUG
#include "debug.hpp"
#else
#define debug(...) void(0)
#endif
using ll = long long;
 
void solve(){
    ll n, i;
    cin>>n;
    vector<ll> a(n+1), p(n+1);
    for(i=1; i<=n; i++){
        cin>>a[i];
        p[i] = max(p[i-1], a[i]);
    }
    ll s=0;
    for(i=n; i>0; i--){
        cout<<s + max(p[i-1], a[i])<< " ";
        s += a[i];
    }cout<<endl;
}
 
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
