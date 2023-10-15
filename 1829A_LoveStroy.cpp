#include<iostream>

using namespace std;

int main()
{
    int t, i, j;
    cin>>t;
    while(t--){
        string str1;
        string str = "codeforces";
        int count = 0;
        cin>>str1;
        for(i=0; i<10; i++){
            if(str[i] != str1[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
