#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(int step=0; step<n-1; step++){
        for(i=0; i<n-step-1; i++){
            if(a[i] > a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;

}
