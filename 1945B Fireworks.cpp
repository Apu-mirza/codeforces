#include<iostream>
using namespace std;
 
int main(){
    long long t, a, b, c;
    cin>>t;
 
    while(t--) {
        cin>>a>>b>>c;
        long long rem1, rem2;
        if(a==1) {
            rem1=(c+1)/a;
        }
        else{
            rem1=(c)/a+1;
        }
        if(b==1){
            rem2=(c+1)/b;
        }else{
            rem2=(c)/b+1;
        }
        cout<<rem1+rem2<<endl;
    }
}
