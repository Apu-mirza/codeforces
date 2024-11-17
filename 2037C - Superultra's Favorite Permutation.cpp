#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, i;
    cin>>n;
    vector<int> evenVect, oddVect;
    if(n <= 4) cout<<"-1"<<endl;
    else {
        oddVect.push_back(5);
        for(i=1; i<=n; i++){
            if(i%2 == 0) {
                if(i != 4)
                    evenVect.push_back(i);
            }
            else{

                if(i == 5) continue;
                else oddVect.push_back(i);
            }
        }
        evenVect.push_back(4);

        vector<int> result;

        result.insert(result.end(), evenVect.begin(), evenVect.end());
        result.insert(result.end(), oddVect.begin(), oddVect.end());
        for (int num : result) {
            cout << num << " ";
        }
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

