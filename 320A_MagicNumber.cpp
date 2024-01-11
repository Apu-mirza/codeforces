#include<iostream>
using namespace std;

int main()
{
    int n, i, len, count=0, flag=0;
    cin>>n;
    while(n > 0){
        if(n%10 == 1) {
                flag = 1;
                count = 0;
        }
        else if(n%10 == 4) {
            count++;
            flag = 1;
            if(count > 2 || n<10) {
                flag = 0;
                break;
            }
        }else {flag = 0; break;}
        n /= 10;
        len++;
    }
    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
