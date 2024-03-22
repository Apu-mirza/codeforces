#include<iostream>
using namespace std;
 
int main()
{
    long long n, m, i;
    cin>>n>>m;
    long long a[m];
    long long round=0;
    for(i=0; i<m; i++){
        cin>>a[i];
    }
    long long count=0;
    for(i=0; i<m; i++){
        if(i < m-1 && a[i] > a[i+1]){
            count++;
            if(count == 1){
                round += (n-1);
            }
            else round += n;
 
        }else{
            if(i == m-1){
                count++;
                if(count == 1) round += a[i]-1;
                else round += a[i];
            }
            else {
                continue;
            }
        }
    }
    cout<<round<<endl;
}
