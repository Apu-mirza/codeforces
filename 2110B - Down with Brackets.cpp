#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
void solve() {
    ll n, i;
    string s;
    cin>>s;
    ll b=0;
    bool y = false;
    n = s.size();
    for(i=0; i<n; i++){
        if(s[i] == '('){
            b++;
        }else{
            b--;
            if(b < 0){
                y = true;
                break;
            }else if(b <= 0  && i<n-1){
                y = true;
                break;
            }else{
                y = false;
            }
        }
    }
    if(y || b>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main() {
 
    int tests; cin >> tests;
    for (int i = 0; i < tests; ++i)
    solve();
}
