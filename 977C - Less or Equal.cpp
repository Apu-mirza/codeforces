#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long
#define int long long

using namespace std;


int32_t main() {

    int n, k, i, j;
    cin>>n>>k;
    int x;
    vector<int> vect;
    for(i=0;i<n; i++){
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(), vect.end());
    int ans;
    if(k == 0){
        if(vect[k] == 1) ans = -1;
        else ans = 1;
    }
    else if(vect[k] != vect[k-1]) ans = vect[k-1];
    else ans = -1;
    cout<<ans<<endl;
}


