#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
 
#define ll                  long long
#define md                  10000007
vector<ll> v;
bool visited[100005];
ll a[100005];
 
int main()
{
    ll n, i, j;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    ll prev_sum = 0, count=0;
    for(i=0; i<n; i++){
        if(v[i] >= prev_sum) {
            count++;prev_sum += v[i];
        }
        
    }
    cout<<count<<endl;
}
