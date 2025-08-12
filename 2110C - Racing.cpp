#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll c=500005;
 
ll n;
ll t[c], l[c], r[c];
 
void solve() {
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> t[i];
    for (ll i = 0; i < n; i++) cin >> l[i] >> r[i];
 
    vector<ll> res(n + 1);
    ll cur = 0;
    bool valid = true;
 
    ll lo[n+1], hi[n+1];
 
    lo[0] = 0, hi[0] = 0;
    for (ll i = 0; i < n; i++) {
 
        if(t[i] == 1){
            lo[i+1] = lo[i] + 1;
            hi[i+1] = hi[i] + 1;
        }else if(t[i] == 0){
            lo[i+1] = lo[i];
            hi[i+1] = hi[i];
        }else {
            lo[i+1] = lo[i];
            hi[i+1] = hi[i]+1;
        }
 
 
 
        lo[i+1] = max(lo[i+1], l[i]);
        hi[i+1] = min(r[i], hi[i+1]);
        if (lo[i+1] > hi[i+1]) {
            cout<<-1<<endl;
            return;
        }
    }
 
    ll curr = lo[n];
    for(ll i=n-1; i>=0; i--){
        if(t[i] == 1){
            curr--;
        }else if(t[i] == -1){
            if(curr > lo[i]){
                curr--;
                t[i] = 1;
            }else{
                t[i] = 0;
            }
        }
    }
 
 
    for (ll i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << "\n";
}
 
int main() {
 
    ll w;
    cin >> w;
    while (w--) solve();
 
    return 0;
}
