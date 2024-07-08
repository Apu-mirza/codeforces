#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    int ans;
    cout<<min(n-a, b+1)<<endl;
}
