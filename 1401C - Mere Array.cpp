#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll x, ll y){
    ll n, m;
    if(x>y) { m = x;n = y;}
    else { m=y; n=x;}
    for(int i=n; i>0; i--){
        if(m%i == 0 && n%i == 0) return i;
    }
}

void solve(){
    int n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    int min=b[0];
    int flag = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]) {
            if((a[i] % min != 0) || (b[i] % min != 0)) {
            flag = 1;
            break;
        }
    }
    }
    if(flag == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
