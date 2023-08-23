#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, i;
    int ans = 0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(i=0;i<s.length(); i++){
        if(s[i] == '1'){
            ans += a;
        }
        else if(s[i] == '2'){
            ans += b;
        }
        else if(s[i] == '3'){
            ans += c;
        }
        else if(s[i] == '4') {
            ans += d;
        }
    }
    cout<<ans<<endl;
}
