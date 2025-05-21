#include <iostream>
#include <cmath>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
   ll n, x, m;
   ll c, d;
   cin>>n>>x>>m;
   ll l = x, r = x;
   for(ll i=0; i<m; i++){
        cin>>c>>d;
        if(d<l || r<c){
            continue;
        }
        l = min(l, c);
        r = max(r, d);
   }
   cout<<r-l+1<<endl;
}
 
int main() {
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
