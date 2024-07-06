#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x;
    cin>>n>>x;

    int count=0;

    for(int i=1; i<=n; i++){
        if(x%i == 0 && x/i <= n) count++;
        else continue;
    }

    cout<<count<<endl;
}
