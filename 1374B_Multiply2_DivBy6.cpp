#include<iostream>
using namespace std;

int main(){
    long long int t, i, n,count;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 1){
                    cout<<"0"<<endl;
                }
        else{
            count=0;
            while(n >= 1){
                if(n%6 == 2 || n%6 == 4 || n%5 == 0){
                    cout<<"-1"<<endl;
                    break;
                }else{
                    if(n%6 == 0){
                        n /= 6;
                        count++;
                    }else if(n == 1){
                        cout<<count<<endl;
                        break;
                    }
                    else{
                        n *= 2;
                        count++;
                    }

                }
            }
        }
    }
}
