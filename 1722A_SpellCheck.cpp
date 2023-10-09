#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t, i, n;
    cin>>t;
    while(t--){
        string timur;
        cin>>n;
        for(i=0; i<n; i++){
            cin>>timur[i];
        }
        int flag = 0, countT=0, counti=0, countm=0, countu=0, countr=0, count = 0;
        for(i=0; i<n; i++){
            if(timur[i] == 'T') {
                countT++;
            }
            else if(timur[i] == 'i') {
                counti++;
            }
            else if(timur[i] == 'm') {
                countm++;
            }
            else if(timur[i] == 'u') {
                countu++;
            }
            else if(timur[i] == 'r') {
                countr++;
            }
            else {count++;}
        }
        if(countT == 1 && counti==1 && countm==1 && countu==1 && countr==1 && count == 0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
    }
}
