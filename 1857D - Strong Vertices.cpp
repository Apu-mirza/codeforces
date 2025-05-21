#include <iostream>
#include <cmath>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n, x, i;
    cin >> n;
    vector<ll> a, b;
    for(i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }
    for(i = 0; i < n; i++){
        cin >> x;
        b.push_back(x);
    }
    vector<ll> diff(n);  // Initialize with size n
    for(i = 0; i < n; i++){
        diff[i] = a[i] - b[i];  // Use assignment (=) not comparison (==)
    }
    vector<ll> copied_diff(n);
    copied_diff = diff;
    sort(copied_diff.begin(), copied_diff.end());
    ll mx = copied_diff[n-1];
    vector<ll> result;
    ll ans = 0;
    for(i=0; i<n; i++){
        if(diff[i] == mx){
            ans++;
            result.push_back(i+1);
        }
    }
    cout<<ans<<endl;
    for(i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout<<endl;
}
 
int main() {
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
