#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#include<string>
#include<map>
#define int long long

using namespace std;


int32_t main() {
    int n, x, i;
    cin>>n;
    vector<int> v;
    for(i=0;i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int countLowest=0, countHighest=0;
    int low = v[0], high = v[n-1];
    int diff = high-low;
    for(i=1; i<n-1; i++){
        if(v[0] == v[i]){
            countLowest++;
        }
        if(v[n-1] == v[i]){
            countHighest++;
        }
    }
    int ans;
    if(diff>0)
        ans = (countHighest+1)*(countLowest+1);
    else
        if(n==2) ans = 1;
        else{
            int fact = n*(n-1);
            ans = fact/2;
        }
    cout<<diff<<" "<<ans<<endl;
}


