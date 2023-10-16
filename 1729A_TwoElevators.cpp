#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    while(t--){
        int a, b, c;
        int time1, time2;
        cin>>a>>b>>c;
            time1 = a-1;
            if(b > c){
                time2 = b-1;
            }
            else{
                time2 = 2*c-b-1;
            }

        if(time1 > time2){
            cout<<"2"<<endl;
        }else if(time1 == time2){
            cout<<"3"<<endl;
        }
        else if(time1 < time2) {cout<<"1"<<endl;}
    }
}
