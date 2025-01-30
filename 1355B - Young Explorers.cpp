#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long


using namespace std;


void solve() {
    int n, i, j;
    cin>>n;
    map<int, int> mp;
    int k;
    for(i=0;i<n; i++){
        cin>>k;
        mp[k]++;
    }
    int total=0, left=0;
    for(auto x: mp){
        x.second += left;
        total += (x.second/x.first);
        left = (x.second%x.first);
    }
    cout<<total<<endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
