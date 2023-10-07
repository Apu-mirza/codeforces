#include<iostream>

using namespace std;

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int count = 1;
        bool flag = true;
        int len = str.length();

        if(len%2 == 0){
                for(i=0; i<len/2; i++)
            {
                int h = len/2;
                if(str[i] != str[h+i]) {flag = false; break;}
                else flag = true;
            }
        }
        else{
                flag = false;
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
