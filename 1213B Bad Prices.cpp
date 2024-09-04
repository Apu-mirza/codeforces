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
        int first = a[0];
        int count = 0;
        int x = 0;
        for(i=0; i<n; i++){
            if(first > a[i]){
                count++;
                int y=i;
                while(y>x){

                    if(a[y-1] > a[i]) count++;
                    else {
                        first = a[i];
                        break;
                    }
                    y--;
                }
                x = i;
            }else
                first=a[i];
        }
        cout<<count<<endl;
    }
}


