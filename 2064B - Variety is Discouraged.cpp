#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll> v[1000005];
ll a[1000005];
bool visited[1000005];

void solve() {
    map<int, int> freqMap;
    ll n;
    cin>>n;vector<ll> num(n);
    for(ll i=0; i<n; i++){
        cin>>num[i];
    }
    for(ll i=0; i<n; i++){
        freqMap[num[i]]++;
    }

    ll r=0, ansl = -1, ansr = -1, count = 0;
    ll len = 0;
    for(ll i=0; i<n; i++){
        r = max(r, i);
        while(r < n && freqMap[num[r]] == 1){
            r++;
        }
        if(r-i > len){
            len = r-i;
            ansl = i;
            ansr = r-1;
        }
    }
    if(ansl == -1) cout<<'0'<<endl;
    else cout<<ansl+1<<" "<<ansr+1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
