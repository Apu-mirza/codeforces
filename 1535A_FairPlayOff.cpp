#include<iostream>
using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        int s1, s2, s3, s4;
        cin>>s1>>s2>>s3>>s4;
        int winner1, winner2;
        if(s1 > s2) winner1 = s1;
        else winner1 = s2;
        if(s3 > s4) winner2 = s3;
        else winner2 = s4;

        if(winner1 > winner2){
            if(s1 > winner2 && s2 > winner2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            if(s3 > winner1 && s4 > winner1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
