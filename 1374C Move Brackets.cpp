#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t, i;
	cin>>t;
	while(t--){
	    string s;
	    int n;
	    cin>>n;
	    cin>>s;
	    int len = s.length();
	    int checker = len/2;
	    int open = 0, close=0;
	    int count=0;
	    for(i=0; i<len; i++){
            if(s[i] == '('){
                open++;
            }
            else{
                close++;
                if(close>open){
                    count++;
                    close--;
                }
            }
	    }
	    cout<<count<<endl;
	}

}

