#include<iostream>
using namespace std;

int main()
{
    int n, i;
    string step;
    cin>>step;
    int flag= 1;
    for(i=0; i<step.length(); i++){
        if(step[i] == 'W' && step[i+1] == 'U' && step[i+2] == 'B'){
            i += 2;
            if(flag == 0)
            cout<<" ";
            else continue;
        }else{
            flag=0;
            cout<<step[i];
        }
    }
    cout<<endl;

}
