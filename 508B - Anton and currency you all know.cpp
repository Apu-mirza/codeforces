#include<bits/stdc++.h>
#include<stdio.h>
#include <cstdlib>
#include<string>
using namespace std;


#define ll                  long long
#define md                  10000007
vector<ll> v;
bool visited[100005];
ll a[100005];

int main()
{
    ll i, j, captureIndex;
    string str;
    cin>>str;


    ll len = str.length();
    ll last_remainder = str[len-1]-'0';
    bool found = false, secondCond = false;
    //cout<<"Len: "<<len<<endl;
    if(last_remainder%2 == 0){cout<<str<<endl;}
    else{
        for(i=0; i<len-1; i++){
            //int checker = stoi(str[i]);
            if(str[i]%2 == 0){
                found = true;
                j = str[i]-'0';
                if(j < last_remainder){
                    swap(str[i], str[len-1]);
                    secondCond = true;
                    break;
                }
                captureIndex = i;
            }
        }

        //cout<<"string[i]: "<<j<<endl;

        if(found){
            if(secondCond){
                    cout<<str<<endl;
                    //cout<<"secod folllowed"<<endl;
                }
            else
                {
                    swap(str[captureIndex], str[len-1]);
                    //ll x = stoi(str);
                    cout<<str<<endl;
                    //cout<<"secod not folllowed"<<endl;
                }
        }else{
            cout<<"-1"<<endl;
        }

    }

}
