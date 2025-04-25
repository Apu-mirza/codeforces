#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    ll c, i;
    ll mx = INT_MIN, mn = INT_MAX;
    for(i=0; i<n; i++){
        cin>>a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    ll decider=-1, nDecider, flag = 1;
    ll lol = -1, minusCount = 0;
    for(i=0; i<n; i++){
        nDecider = 0;
        if(b[i] == lol){
            minusCount++;
        }else{
            nDecider = a[i] + b[i];
            if(decider == -1) decider = nDecider;
            else if(decider != nDecider) {
                flag = 0;
                break;
            }
        }
    }
    ll ans;
    if(flag == 0) {
        cout<<"0"<<endl;
    }
    else{
        long long L = 0, R = 1e18;
        if (decider != -1) {
                for (i = 0; i < n; i++) {
                    if (b[i] == -1 && (decider < a[i] || decider > a[i] + k)) {
                        flag = 0;
                        break;
                    }
                }
                cout << (flag ? 1 : 0) << endl;
            } else {
                for ( i = 0; i < n; i++) {
                    L = max(L, a[i]);
                    R = min(R, a[i] + k);
                }
                cout << max(0LL, R - L + 1) << endl;
            }

    }
    /*else {
        if(minusCount == n) {
            ans = k - (mx - mn) + 1;
            cout<<ans<<endl;
        }else {
            cout<<"1"<<endl;
        }
        for (int i = 0; i < n; i++) {
                if (b[i] == -1 && (x < a[i] || x > a[i] + k)) {
                    ok = false;
                    break;
                }
            }
            cout << (ok ? 1 : 0) << endl;
    }*/



}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

}
