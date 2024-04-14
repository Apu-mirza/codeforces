#include<iostream>
using namespace std;

int main()
{
    int t, n, m, k, ncard, njoker;
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        ncard=n/k;
        if(m == 0) cout<<"0"<<endl;
        else if(ncard == 1) {
            if(m>1) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else if(m > ncard) {
            int tt = m-ncard;
            int ttt;
            if(tt%(k-1) == 0){
                ttt = tt/(k-1);
            }else{
                ttt = tt/(k-1)+1;
            }
            int ans = ncard-ttt;
            cout<<ans<<endl;

        } else {
            cout<<m<<endl;
        }
    }
    return 0;
}
