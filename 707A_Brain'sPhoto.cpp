#include<iostream>
using namespace std;

int main()
{
    int n, m, i, j;
    int ans = 0;
    cin>>n>>m;
    int len = n*m;
    char color[n];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>color[j];
            if(color[j] == 'C' || color[j] == 'Y' || color[j] == 'M'){
                ans++;
            }
        }
    }

    /*for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(color[j] == 'C' || color[j] == 'Y' || color[j] == 'M'){
                ans++;
            }
        }
    } */

    if(ans == 0) {
        cout<<"#Black&White"<<endl;
    }
    else cout<<"#Color"<<endl;
}
