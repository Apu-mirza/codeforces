#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#include<string>
#include<map>
#define int long long
#define fr(n) for(int i=0; i<n; i++)

using namespace std;


int32_t main() {
    int n, x, i;
    string ans;
    vector<int> v;
    map<char, int> mp;
    string s;
    cin>>s;
    n = s.length();
    int freq;
    fr(n){
         mp[s[i]]++;
    }
    int countEven = 0, countOdd = 0;
    for(auto x: mp){
        if(x.second%2 != 0) countOdd += x.second;
    }

    if((countOdd-1)%2 == 0 || countOdd == 0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}


