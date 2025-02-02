#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long

using namespace std;


int32_t main() {
    int n, i, j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int start(1), end(1);
    for(i=1; i<n; i++){
        if(a[i]<a[i-1]) start = i;break;
    }
    for(i=n-1; i>=1; i--){
        if(a[i]<a[i-1]) {
            end = i+1; break;
        }
    }
    reverse(a+start-1, a+end);
    if(is_sorted(a, a+n)){
        cout<<"yes"<<endl;
        cout<<start<<" "<<end<<endl;
    }else cout<<"no"<<endl;
    return 0;
}


