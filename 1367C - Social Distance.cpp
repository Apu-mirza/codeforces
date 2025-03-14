#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, i;
    cin>>n>>k;
    string str;
    cin>>str;
    int zeroCount = 0;
    bool prevOnefound = false;
    bool alzero = true;
    int lol = 0, ans = 0;
    for(i=0; i<n; i++){
        if(str[i] == '1') {alzero = false; break;}
    }
    if(alzero && k>= n) { cout<<'1'<<endl;}
    else{
        for(i=0; i<n; i++){
            if(str[i] == '1'){
                if(!prevOnefound){
                    ans = zeroCount/(k+1);
                    lol += ans;
                }else{
                    ans = (zeroCount-k)/(k+1);
                    lol += ans;
                }


                zeroCount = 0;
                prevOnefound = true;
            }else{
                zeroCount++;
                if(i == n-1){
                    if(zeroCount>0 && alzero){
                        ans = (zeroCount-1)/(k+1)+1;
                        lol += ans;
                    }else{
                        ans = zeroCount/(k+1);
                        lol += ans;
                    }
                }
            }
        }
        cout<<lol<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin>>t;
    while(t--){
        solve();
    }
}
