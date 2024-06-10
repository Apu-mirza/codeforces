#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int count=1, cCount = 0;
        for(i=0;i<len-1;i++){
            if(s[i] != s[i+1]){
                count++;
            }
        }
        if(count == 2){
            if(s[0] == '1')
                cout<<count<<endl;
            else
                cout<<count-1<<endl;
        }
        else if(count < 2) cout<<count<<endl;
        else{
            cout<<count-1<<endl;
        }
    }
}
