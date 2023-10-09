#include<iostream>
using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;
        int one=0, two=0, sum=0;
        int arr[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 1) {one++; sum++;}
            else {two++; sum+=2;}
        }

        if(one%2 == 0 && two%2 == 0){
            cout<<"Yes"<<endl;
        }else if(two%2 != 0 && one %2 == 0 && one>0){
            cout<<"Yes"<<endl;
        }else{cout<<"NO"<<endl;}
    }
}
