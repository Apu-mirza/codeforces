#include<bits/stdc++.h>
#define ll long long

using namespace std;

int solve(){
    int n;
    cin>>n;
    ll a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i=0, j=n-1;
    int moves=0, alice =0, bob=0;
    int suma=0, sumb=0;
    while(i<=j){
        if(moves%2 == 0){
            int fsuma=0;
            while(i<=j && fsuma <= sumb){
                fsuma += a[i];
                i++;
            }
            suma = fsuma;
            alice += fsuma;
        } else{
            int fsumb=0;
            while(i<=j && fsumb <= suma){
                fsumb += a[j];
                j--;
            }
            sumb = fsumb;
            bob += fsumb;
        }
        moves++;
    }
    cout<<moves<<" "<<alice<<" "<<bob<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
