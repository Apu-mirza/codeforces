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
    cin >> n;
    vector<ll> a;
    ll x, lCounted, ans = 0;
    for(i=0; i<n; i++){
        cin>>x;
        if(!ans || lCounted+1 < x){
            ans++;
            lCounted = x;
        }
    }
 
    cout<<ans<<endl;
}
 
int main() {
 
    ll w;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> w;
    while (w--) solve();
 
    return 0;
}
