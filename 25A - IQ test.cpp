#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long

using namespace std;


int32_t main() {
    int n, x, i;
    cin>>n;
    int a[n+1];
    int countEven = 0, countOdd = 0;
    int ans;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2 == 0) countEven++;
        else countOdd++;
    }
    if(countEven>countOdd) {
        for(i=0; i<n; i++){
            if(a[i] %2 != 0) {
                ans = i+1; break;
            }
        }
    }else{
        for(i=0; i<n; i++){
            if(a[i] %2 == 0) {
                ans = i+1; break;
            }
        }
    }
    cout<<ans<<endl;
}


