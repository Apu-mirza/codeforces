#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n, i;
    cin>>n;
    int j;
    string strr;
    cin>>strr;
    int number_of_zero=0;
    for(i=0; i<n; i++){
        if(strr[i] == '0') number_of_zero++;
    }
    if(number_of_zero == 1 || number_of_zero%2 == 0){
        cout<<"BOB"<<endl;
    }else{
        cout<<"ALICE"<<endl;
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

