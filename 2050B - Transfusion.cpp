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
    int n,i;
    cin>>n;
    int x, sum1=0, sum2=0;
    for(i=1; i<=n; i++){
        cin>>x;
        if(i%2==0) sum2+=x;
        else sum1+=x;
    }
    int total = sum1+sum2;
    if(total%n == 0){
        if(n%2 == 0){
            if(sum1 == sum2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(sum1 == sum2+(total/n)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }else cout<<"NO"<<endl;
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

