#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, i, j;
    cin>>n>>m;
    int arr[n], arr2[n];
    for(i=0; i<n; i++){

        cin>>arr[i];
        if(arr[i] % m != 0){
            arr2[i] = arr[i]/m+1;
        }else
            arr2[i] = arr[i]/m;
    }
    int max = arr2[0];
    int position = 0;
    for(i=0; i<n; i++){
        if(max <= arr2[i]){
            max = arr2[i];
            position = i;
        }
    }
    cout<<position+1<<endl;
    return 0;
}
