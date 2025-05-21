#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve(){
    ll n, i;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    ll oneCount=0;
    for(i=0; i<n; i++){
        if(a[i] == 1) oneCount++;
    }
    bool no = true;
    for(i=0; i<n-1; i++){
        if(a[i] == 0 && a[i+1] == 0){
            no = false;
            break;
        }
    }
    if(oneCount==n || !no){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}
