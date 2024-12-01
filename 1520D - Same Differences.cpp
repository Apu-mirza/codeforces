#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long
#define int long long

using namespace std;

void solve(){
    int n,i, j, cnt=0;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++) {
            cin>>a[i];
    }
    map<int, int> mp;
    for(i=0; i<n; i++){
        mp[a[i]-i]++;
        cnt += mp[a[i] - i];
    }

    cout<<abs(n-cnt)<<endl;

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

