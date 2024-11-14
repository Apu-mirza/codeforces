#include <iostream>
#include <cmath>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    long long n, x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        long long a[n];
        long long count = 0;
        long long ans=-1, i;
        for(i=1; i<=n; i++){
            cin>>a[i];
            count += a[i];
            if(count%x != 0){
                ans = max(ans, max(i, n-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
