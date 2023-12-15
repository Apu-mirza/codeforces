#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str1, str2;
        int flag = 1;
        cin>>str1;
        cin>>str2;
        for(i=0; i<n; i++){
            if(str1[i] == str2[i]) { flag = 1; continue; }
            else if(str1[i] == 'G' && str2[i] == 'B') { flag = 1; continue; }
            else if(str1[i] == 'B' && str2[i] == 'G') { flag = 1; continue; }
            else {flag = 0; break;}
        }

        if(flag == 0) cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
    }
}
