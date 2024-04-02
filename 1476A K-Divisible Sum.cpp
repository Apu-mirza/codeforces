#include<iostream>
using namespace std;

int main()
{
    int t, n, i, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ans;
        if(n%k == 0) {
            ans = 1;
        }
        else if(k%n == 0){
            ans = k/n;
        }else{
            if(n < k){
                ans = k/n+1;
            }else{
                ans = 2;
            }
        }
        cout<<ans<<endl;
    }
}
