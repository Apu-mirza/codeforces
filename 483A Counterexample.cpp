#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    long long int a, b, dif, min_divisor;
    cin>>a>>b;
    if(a&1) a++;
    if(abs(b-a) >= 2) cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    else cout<<"-1"<<endl;
}
