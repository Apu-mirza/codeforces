#include<iostream>
using namespace std;

int main()
{
    int n;


    cin>>n;
    string teamName[n];
    for(int i=0; i<n; i++){

        cin>>teamName[i];
    }
    string team1 = teamName[0];
    string team2;
    int count1=0, count2=0;
    for(int i=0; i<n; i++){
        if(team1 == teamName[i]) count1++;
        else {
            team2 = teamName[i];
            count2++;
        }
    }
    if(count1 > count2) cout<<team1<<endl;
    else cout<<team2<<endl;
}


