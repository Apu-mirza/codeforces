#include <bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define ll long long
const ll c=500005;
 
ll n;
ll t[c], l[c], r[c];
 
void solve() {
    string s;
    ll int_value;
    cin>>s;
    int_value = stoi(s);
    ll first_val=0, second_val=0;
    ll sqrt_value = sqrt(int_value);
    if(sqrt_value*sqrt_value != int_value){
        cout<<-1<<endl;
    }else{
        second_val = sqrt_value;
        cout<<first_val<<" "<<second_val<<endl;
    }
}
 
int main() {
 
    ll w;
    cin >> w;
    while (w--) solve();
 
    return 0;
}
