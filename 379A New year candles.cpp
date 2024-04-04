#include<iostream>
using namespace std;

int main()
{
    int t, a, b, c, rem, div;
    cin>>a>>b;
    int ans = a;
    while(a >= b){
        div = a/b;
        ans += div;
        rem = a%b;
        a = div+rem;
    }
   cout<<ans<<endl;
}
