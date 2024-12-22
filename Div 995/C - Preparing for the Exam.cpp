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
  int n, m, k;
  cin>>n>>m>>k;
  int a[n+1], b[n+1], i;
  for(i=1; i<=m; i++){
    cin>>a[i];
  }
  for(i=1; i<=k; i++){
    cin>>b[i];
  }
  if(n-k > 1){
    for(i=1; i<=m; i++){
        cout<<0;
    }cout<<endl;
  }else if(n-k <= 0){
    for(i=1; i<=m; i++){
        cout<<1;
    }cout<<endl;
  }else{
    int index;
    for(i=1; i<=k; i++){
        if(i != b[i]) {
            index = i; break;
        }else index = k+1;
    }
    for(i=1; i<=m; i++){
        if(i == index) cout<<1;
        else cout<<0;
    }cout<<endl;
 
  }
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
