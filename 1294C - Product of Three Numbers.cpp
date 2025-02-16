#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll> v[1000005];
ll a[1000005];
bool visited[1000005];

void solve() {
    ll n, i;
    cin>>n;
    ll a, b, c, temp=0, x;
    bool notprime = true;
    bool found = false;
    if(n < 8) {cout<<"no"<<endl; return;}

    if(n%2 == 0){
        a = 2;
        temp = n/2;
        for(i=2; i*i<=temp && !found; i++){
            if(temp%i == 0){
                c = temp/i;
                b = i;
                if(a != b && b != c && c != a){
                    found = true;
                    break;
                }
            }
        }
    }else{
        for(i=3; i*i<=n; i++){
            if(n%i == 0){
                a = i;
                temp = n/i;
                notprime = false;
                break;
            }
        }
        for(ll j=a; j*j<=temp && !notprime; j++){
                    if(temp%j == 0){
                        b = j;
                        c = temp/j;
                        if(a != b && b != c && c != a){
                            found = true;
                            break;
                        }
                    }
                }

    }
    if(found) {
        cout<<"yes"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }else cout<<"no"<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
