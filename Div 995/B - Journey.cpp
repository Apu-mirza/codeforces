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
   int n, a, b, c;
   int sum = 0, ans;
   cin>>n>>a>>b>>c;
   sum = a+b+c;
   if(n%sum == 0) ans = n/sum * 3;
   else{
        int init = n/sum * 3;
        int x = n%sum;
        if(x<=a) ans = init + 1;
        else if(x<=a+b) ans = init + 2;
        else ans = init + 3;
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
 
