#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll n, i;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    ll b[n];
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    vector<ll> ansVector(n);
    for(i=0; i<n; i++){
        if(a[i] > b[i]){
            ll x = a[i] - b[i];
            ansVector[i] = x;
        }
    }
    sort(ansVector.begin(), ansVector.end(), greater<ll>());
    ll ans = 0;
    //cout<<"ansvector: ";
    for(i=0; i<ansVector.size(); i++){
        //cout<<ansVector[i]<<" ";
        ans += ansVector[i];
    }
    ans = ans+1;
    cout<<ans<<endl;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll w;
    cin >> w;
    while (w--) solve();
}
