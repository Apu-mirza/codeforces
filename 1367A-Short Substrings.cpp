#include<iostream>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        string s, t;
        int len;
        cin>>s;
        len = s.length();
        for(int i=0; i<len; i++){
            if(i%2 == 0){
                t += s[i];
            }
        }
        t += s[len-1];
        cout<<t<<endl;
    }
}
