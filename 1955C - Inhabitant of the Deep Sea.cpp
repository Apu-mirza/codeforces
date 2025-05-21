#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
void solve() {
    ll n, k, i;
    cin>>n>>k;
    vector<ll> v;
    ll x, allSum = 0;
    for(i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
        allSum += x;
    }
    if(k >= allSum) {
        cout<<n<<endl;
        return;
    }
    ll first_half, second_half;
    if(k%2 == 0){
        first_half=k/2;
    }else{
        first_half = (k+1)/2;
    }
    second_half = k/2;
    ll firstCount = 0, secondCount = 0;
    ll ans1 = 0, ans2 = 0;
    ll j = 0, l = n-1;
    while(firstCount <= first_half){
        firstCount += v[j];
        j++;
        if(firstCount <= first_half)
            ans1++;
    }
    while(secondCount <= second_half){
        secondCount += v[l];
        l--;
        if(secondCount <= second_half)
            ans2++;
    }
    cout<<ans1+ans2<<endl;
}
 
signed main() {
ios_base::sync_with_stdio(false);
 
cout.tie(nullptr);
int tests; cin >> tests;
for (int i = 0; i < tests; ++i)
solve();
}
