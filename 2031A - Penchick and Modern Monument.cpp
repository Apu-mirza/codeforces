#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, i;
        cin >> n;
        int a[n+1];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        int count=1;
        int ans = n-1, lol=0;
        if(n==1) cout<<"0"<<endl;
        else{
            for(i=0; i<n-1; i++){
                if(a[i] == a[i+1]){
                    count++;
                }else {
                    lol = max(count, lol);
                    count=1;
                }
                lol = max(count, lol);

            }
            cout<<n-lol<<endl;
        }

    }

    return 0;
}




