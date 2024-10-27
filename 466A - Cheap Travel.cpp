#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int m, n, a, b;
    cin>>n>>m>>a>>b;
    int count = 0, x=0;
    while(x < n){
        if(b < a*m && ((n-x)*a > b || n-x >= m)) {
                count += b;
                x += m;

        }
        else {
            count += a;
             x++;
        }
    }
    cout<<count<<endl;
}
