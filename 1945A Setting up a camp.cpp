#include<iostream>
using namespace std;
 
int main()
{
    int t, a, b, c;
    cin>>t;
 
    while(t--) {
        cin>>a>>b>>c;
        int count=0, possible = 0;
        int ex=b/3;
        int rem=b-ex*3;
        if(a+b+c == 0) possible = 1;
        else {if(rem+c >= 3 || rem == 0 || rem+c==0){
            possible = 1;
            count = a+ex+(rem+c)/3;
            if((rem+c)%3==0) {count = a+ex+(rem+c)/3;}
            else {count = (a+ex+(rem+c)/3)+1;}
        }
        else possible = 0;
        }
        if(possible==1) {
            cout<<count<<endl;
        }
        else cout<<"-1"<<endl;
    }
}
