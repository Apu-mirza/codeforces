#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin>>a>>b>>c;
    int mid1, mid2, mid3;
    x = sqrt((a*b)/c);
    y = sqrt((b*c)/a);
    z = sqrt((c*a)/b);
    int ans = 4*(x+y+z);
    cout<<ans<<endl;
}
