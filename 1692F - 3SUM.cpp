#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll> v[1000005];
ll a[1000005];
bool visited[1000005];

void solve() {
    ll n, m;
    cin >> n;
    vector<ll> c(n);
    map<ll, ll> mp;
    vector<ll> mod;
    for (ll i = 0; i < n; i++) {
        cin >> c[i];
        if(mp[c[i] % 10] < 3) mod.push_back(c[i]%10);

        mp[c[i]%10]++;
    }
    bool found = false;
    ll x = mod.size();
    sort(mod.begin(), mod.end());
    for(int i=0; i<x-2 && !found; i++){
        for(int j=i+1; j<x-1 && !found; j++){
            for(int k=j+1; k<x && !found; k++){
                if((mod[i]+mod[j]+mod[k])%10 == 3){found = true; break;}
            }
        }
    }
    if(found) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
