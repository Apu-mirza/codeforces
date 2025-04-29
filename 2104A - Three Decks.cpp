#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll a, b, c, i;
    cin>>a>>b>>c;
    ll sum = a+b+c;
    ll tabu;
    if(sum%3 != 0){
        cout<<"NO"<<endl;
    }else {
        tabu = sum/3;
        ll aTabu = tabu - a;
        ll bTabu = 0;
        if(tabu > b) {
            bTabu = tabu - b;
        }
        ll cTabu = c-tabu;
        if(b > tabu) {
            cout<<"NO"<<endl;
        }
        else if(aTabu + bTabu == cTabu){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
 
 
}
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
 
}
