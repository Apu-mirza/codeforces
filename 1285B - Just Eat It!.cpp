#include <bits/stdc++.h>

using namespace std;
#define eb                    emplace_back

#define ll long long

ll a[1000005];
bool visited[1000005];

void solve() {
    ll n,total=0;
        vector<ll> a;
        a.eb(0);
        cin>>n;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            a.eb(temp);
            total+=temp;
        }
        for(int i=1;i<=n;i++)
            a[i]+=a[i-1];
        ll l=0,mx=-INT_MAX;
        for(int i=1;i<n;i++)
        {
                mx=max(mx,a[i]-a[l]);
            if(a[i]<a[l])
                l=i;
        }
        l=1;
        for(int i=2;i<=n;i++)
        {
                mx=max(mx,a[i]-a[l]);
            if(a[i]<a[l])
                l=i;
            //cout<<mx<<endl;
        }
        if(total>mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
