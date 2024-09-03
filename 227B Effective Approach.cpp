#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, m, index[100001];
    cin>>n;
    int a, i;
    for(i=0; i<n; i++){
        cin>>a;
        index[a]=i;
    }
    cin>>m;
    long long vasya=0, petya=0, k;
    int b, j;
    for(j=0; j<m; j++){
        cin>>b;
        vasya += index[b]+1;
        petya += n-index[b];
    }
    cout<<vasya<<" "<<petya<<endl;
}


