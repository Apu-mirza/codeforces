#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int t,t1;
    long long sum=0;
    char p='a';
    for(int i=0;i<s.length();i++){
        t=(s[i]-p);
        if(t>0) t1=t-26;
        else t1=t+26;
        p=s[i];
        sum+=min(abs(t),abs(t1));
    }
    cout<<sum<<endl;

}
