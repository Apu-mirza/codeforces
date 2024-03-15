#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    long long n, b, d, i;
    cin>>n>>b>>d;
    long long sum = 0;
    long long arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    long count = 0;
    for(i=0; i<n; i++){
        if(arr[i] <= b){
            sum += arr[i];
        }
        if(sum > d) {
                sum=0;
        count++;
        }
    }
    cout<<count<<endl;
}
