#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        int first = a[n-1];
        int count = 0;
        int x = 0;
        for(i=n-2; i>=0; i--){
                if(first < a[i]){
                    count++;
                }else{
                    first = a[i];
                }
        }
        cout<<count<<endl;
    }
}


