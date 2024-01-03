#include <iostream>
using namespace std;
 
int main() {
    // your code goes here
    int n, i, count=0,count1=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
    if(s[i] == '0') count1++;
    else count++;
    }
    if(count>=count1){
    cout<<count-count1<<endl;
    }else
    cout<<count1-count<<endl;
    return 0;
}
