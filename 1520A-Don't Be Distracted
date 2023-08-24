#include<iostream>

using namespace std;
int main()
{
    int t, n, i;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        int flag = 0;
        for(i=0; i<n; i++){
            if(s[i] != s[i+1]){
                for(int j=i+2; j<n; j++){
                    if(s[i] == s[j]) {flag = 1; break; }
                    else continue;
                }
            }
            else continue;
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}
