#include<iostream>
using namespace std;
 
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int i;
        string temp;
        int flag = 1;
        int size = s.length();
        for(i=0; i<size; i++){
            if(s[0] != s[i]){
                flag = 0;
                temp[0] = s[0];
                s[0] = s[i];
                s[i] = temp[0];
                break;
            }
        }
        if(flag == 1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(i=0; i<size; i++){
                cout<<s[i];
            }cout<<endl;
        }
    }
}
