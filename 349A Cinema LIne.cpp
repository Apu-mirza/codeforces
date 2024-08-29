#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    long long int checker = 25, flag = 0;
    int t25=0, t50=0, t100=0;
    for(i=0; i<n; i++){
        if(a[i] == 25 && a[i] <= checker){
            t25++;
            checker += 25;
            flag = 1;
        }else if(a[i] == 50 && a[i] <= checker && t25 >= 1){
            t25--;
            checker += 25;
            t50++;
            flag = 1;
        }else if(a[i] == 100 && a[i] <= checker && (t25>=1 && t50 >= 1)){
            checker += 25;
            t25--;
            t50--;
            flag = 1;
        }else if(a[i] == 100 && a[i] <= checker && t25>=3){
            t25 -= 3;
            checker += 25;
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }
    if(flag  == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
