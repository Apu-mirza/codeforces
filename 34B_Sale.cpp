#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m, i;
    cin>>n>>m;
    int count = 0, ans, a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(int step = 0; step < n-1; step++){
        for(int j=0; j < n-step-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<m; i++){
        if(a[i] < 0){
            count += a[i];
        }
    }
    ans = abs(count);
    cout<<ans<<endl;
    /*for(int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }cout<<endl;*/
}
