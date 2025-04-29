#include <bits/stdc++.h>
using namespace std;
#ifdef DEBUG
#include "debug.hpp"
#else
#define debug(...) void(0)
#endif
using ll = long long;

void solve(){
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    if(n == 2){
        if(s[0] == 'A') cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }else {
        ll freqA = 0, freqB = 0;
        for(i=0; i<n; i++){
            if(s[i] == 'A') freqA++;
            else freqB++;
        }

        if(freqA == 1) {
            cout<<"Bob"<<endl;
        }else if(freqB == 1) {
            cout<<"Alice"<<endl;
        }else {
            if((s[n-2] == 'B' && s[0] == 'B') || (s[n-2] == 'B' && s[n-1] == 'B') || (s[n-1] == 'B' && s[0] == 'B')) {
                    cout<<"Bob"<<endl;
               }
               else if((s[n-2] == 'A' && s[n-1] == 'A') || (s[n-1] == 'A' && s[0] == 'A')){
                    cout<<"Alice"<<endl;
               }else {
                    cout<<"Bob"<<endl;
               }
        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
