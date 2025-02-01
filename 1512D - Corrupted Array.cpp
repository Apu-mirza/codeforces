#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 2);
    int sum = 0;

    int i, j;
    for (i = 0; i < n + 2; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    sum -= v[n]+v[n + 1];

    bool found = false;
    if(sum == v[n+1] || sum == v[n]){
        for(i=0; i<n; i++){
            cout<<v[i]<<" ";
        }cout<<endl;
        return;
    }
    for(i=0; i<n; i++){
        if(sum-v[i]+v[n] == v[n+1]){
            found = true;
            v[i] = v[n];
            break;
        }
    }
    if(found == false) cout<<"-1";
    else
        for(i=0; i<n; i++){
            cout<<v[i]<<" ";
        }cout<<endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
