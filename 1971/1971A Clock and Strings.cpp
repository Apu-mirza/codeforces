#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a < b){
            if(c > a && c < b){
                if(d > a && d < b) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
            else{
                if(d > a && d < b) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }else{
            if(c > b && c < a){
                if(d > b && d < a) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
            else{
                if(d > b && d < a) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
    }
}