#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t, n, i;
    cin>>t;
    while(t--)
    {
        int a, b, c, next, dif;
        cin>>a>>b>>c;
        if(b>a){dif = b-a;}
        else {dif = a-b;}
        int range = 2*dif;
        if(a>range || b>range || c>range){next = -1;}
        else if(c<=dif){
        next = c + dif;
        }
        else{
        next = c-dif;
        }

        cout<<next <<endl;
    }
    return 0;
}
