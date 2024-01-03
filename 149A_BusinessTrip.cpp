#include <iostream>
using namespace std;
 
int main() {
    // your code goes here
    int n, a[12], i, j, sum=0, count=0;
    cin>>n;
    for(i=0; i<12; i++){
    cin>>a[i];
    }
    
    for(i=0; i<12; i++){
      for(j=0; j<12-i-1; j++){
        if(a[j] < a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for(i=0; i<12; i++){
        sum += a[i];
        if(sum < n) count++;
        else{
        count++;
        break;
        }
    }
    if(n==0) cout<<"0"<<endl;
    else if(n>sum) cout<<"-1"<<endl;
    else cout<<count<<endl;
    return 0;
}
