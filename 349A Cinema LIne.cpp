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
    for(i=0; i<n; i++){
        if(checker < a[i]){
            flag = 0;
            break;
        }else{
            flag = 1;
            checker += 25;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
