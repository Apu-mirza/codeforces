#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;
        long long x;
        long long mx=0, sum=0, count=0;
        for(i=0; i<n; i++){
            cin>>x;
            sum += x;
            mx = max(mx, x);
            if(sum-mx == mx){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
