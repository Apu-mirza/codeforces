#include<iostream>
using namespace std;

int main()
{
    int t, i;
    long long n;
    cin>>t;
    while(t--){

        cin>>n;
        int x = 0, count=0, sum=0;
        while(n > 2){
        long long t = 5 ;
        long long now = 2 ;
        while(n >= t + now){
            now = t + now ;
            t += 3;
        }
        n -= now ;
        count ++;
    }
        if(n>=2) count++;
        cout<<count<<endl;
    }
}
