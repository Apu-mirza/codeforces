#include<bits/stdc++.h>
#define ll long long

using namespace std;

int solve(){
    int n;
    cin>>n;
    ll a[n+1];
    ll b[n+1];
    set<int> s;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        s.insert(b[i]);
    }
    if(s.size() == 1){
        if(is_sorted(a, a+n)){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }else cout<<"YES"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
