#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          int a, b;
          cin>>a>>b;
          if(b==1) cout<<"NO"<<endl;
          else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
          }
     }
}
