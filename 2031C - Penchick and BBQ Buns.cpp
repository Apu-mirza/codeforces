#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, i;
    cin>>n;
    int j;
    vector<int> fifteen = {1, 2,2,3,3,4,4,5,5,1,6,6,7,7,8,8,9,9,10,10,11,11,13,12,12,1,13};
    vector<int> vect;
    if(n%2 != 0) {
        if(n<27) cout<<"-1"<<endl;
        else{
            int x=n-27;
            for(i=14,j=14; i<=n/2,j<=n/2; i++, j++){
                fifteen.push_back(i);
                fifteen.push_back(j);
            }
            for(i=0; i<n; i++){
                cout<<fifteen[i]<<" ";
            }cout<<endl;
        }
    }
    else{
        for(i=1; i<=n/2; i++){
            for(j=0; j<2; j++){
                vect.push_back(i);
            }
        }
        for(i=0; i<n; i++) cout<<vect[i]<<" ";
        cout<<endl;
    }
}

int main() {
    int n;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

