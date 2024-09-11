#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long t, n, x;
    vector<long long> f;
    cin>>t;
    while(t--){
        cin>>n>>x;
        long long i, a;
        f.clear();
        vector<long long> sorted;
        for(i=0; i<n; i++){
            cin>>a;
            f.push_back(a);
        }
        sort(f.begin(), f.end(), std::greater<long long>());
        long long ans, counted=0, count=0;
        for(long long num : f){
            counted += num;
            count++;
            if(counted/count < x) {
                ans = count-1;
                break;
            }
            ans = count;
        }
        cout<<ans<<endl;
    }
}
