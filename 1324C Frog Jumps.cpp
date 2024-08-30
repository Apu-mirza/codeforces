#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int ansl = 0, ansr=0, ans, ansll=0;
        for(i=0; i<len; i++){
            if(s[i] == 'R'){
                if(ansl > 0)
                    ansl--;
            }else{
                ansl++;
                ansll = max(ansl, ansll);
            }

        }
        ans = ansll + 1;
        cout<<ans<<endl;
    }
}
