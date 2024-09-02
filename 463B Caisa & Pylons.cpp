#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    int h[n];
    for(i=0; i<n; i++){
        cin>>h[i];
    }
    int max = h[0];
    for(i=1; i<n ;i++){
        if(max < h[i]){
            max = h[i];
        }
    }
    cout<<max<<endl;
}
 
