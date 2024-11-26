#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n, i;
    cin>>n;
    int j;
    vector<int> a;
    unordered_map<int, int> frequency;
    int x;
    int ans = 0;
    for(i=0; i<n; i++){
        cin>>x;

        ans += frequency[log2(x)];
        ++frequency[log2(x)];

    }
    cout<<ans<<endl;


}

int32_t main() {
    int n;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

