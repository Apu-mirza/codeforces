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
   int n, i;
   cin>>n;
   int a[n], b[n];
   for(i=0; i<n; i++){
        cin>>a[i];
   }
   for(i=0; i<n; i++){
        cin>>b[i];
   }
   int ans = 0;
   for(i=0; i<n; i++){
        if(i<n-1){
            if(a[i]<b[i+1]) continue;
            else ans += (a[i]-b[i+1]);
        }else ans += a[i];
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