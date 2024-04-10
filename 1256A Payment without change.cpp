#include<iostream>
using namespace std;

int main()
{
    long long t, x, y, n, s, tt, subtt;
    cin>>t;
    while(t--){
        cin>>x>>y>>n>>s;
        tt=x*n + y*1;
        subtt=x*n;
        if(subtt == s || tt == s) cout<<"YES"<<endl;
        else if(tt < s) cout<<"NO"<<endl;
        else{
            if(subtt > s){
                int fc = s/n;
                int subtt2 = fc*n;
                int checker = s-subtt2;
                if(checker <= y) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                int checker = s-subtt;
                if(checker <= y) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}
