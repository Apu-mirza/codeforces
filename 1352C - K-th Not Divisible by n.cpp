#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, k, i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int count = 0, i=1;
        int ans;
        int dif = n-1;
        int times = k/dif;
        int rem = k%dif;

        if(rem!=0) ans = dif*times+rem+times;
        else ans = dif*times+times-1;
        cout<<ans<<endl;
    }
}
