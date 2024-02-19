#include<iostream>
using namespace std;
 
int main(){
    string s;
    int t, i, len;
    cin>>t;
    while(t--){
        cin>>s;
        int numA=0, numB=0;
        len=s.length();
        for(i=0; i<len; i++){
            if(s[i] == 'A'){
                numA++;
            }else if(s[i] == 'B'){
                numB++;
            }
        }
        if(numA>numB){
            cout<<"A"<<endl;
        }else cout<<"B"<<endl;
    }
}
