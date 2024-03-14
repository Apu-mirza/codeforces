#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count1=0, count0=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') count1++;
            else count0++;
        }
        if(count1 < count0){
            if(count1%2 == 0) cout<<"NET"<<endl;
            else cout<<"DA"<<endl;
        }else{
            if(count0%2 == 0) cout<<"NET"<<endl;
            else cout<<"DA"<<endl;
        }
    }
}

