#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int n, i;
    cin>>n;
    int x;
    vector<int> arr;
    for(i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    for (int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]){
            if(arr[i] - arr[i+1] == 1) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
    if (is_sorted(arr.begin(), arr.end())){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
 
int main() {
    int n, t, i;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}
