#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        char s[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>s[i][j];
            }
        }
        int countB=0, countR=0, flag=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(s[i][j] == 'R') countR++;
                else{
                    while(s[i][j] == 'B'){
                        i++;
                        countB++;
                    }
                }

                if(countB == 8) { flag = 1; break; }
                else if(countR == 8) { flag = 0; break; }
            }
        }
        if(flag ==1) cout<<'B'<<endl;
        else cout<<'R'<<endl;
    }
}
