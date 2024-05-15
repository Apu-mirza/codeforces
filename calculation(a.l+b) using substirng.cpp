#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;

pair<int, int> countZerosOnes(string s){
    int count1=0, count0=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1') count1++;
        else count0++;
    }
    return make_pair(count0, count1);
}

int main()
{
    int t, i, n;
    cin>>t;
    while(t--){
        string s;
        int n, a, b;
        cin>>n>>a>>b;
        cin>>s;
        vector<int> lengthZeros;
        vector<int> lengthOnes;
        int count1 = 0, count0=0;
        int zeros, ones, forZeros, forOnes, ans;

        if(b >= 0){
            ans = n*(a+b);
        }else{
            pair<int, int> result = countZerosOnes(s);
            zeros = result.first;
            ones = result.second;
            //cout<<"number of zeros, ones: "<<zeros<<" "<<ones<<endl;

            for(i=0; i<n; i++){
                    if(s[i] == '1'){
                        count1++;
                        if(count0 > 0){
                            lengthZeros.push_back(count0);
                            count0=0;
                        }
                    }else{
                        count0++;

                        if(count1 > 0){
                            lengthOnes.push_back(count1);
                            count1=0;
                        }
                    }
                }
            if(count0 > 0){
                    lengthZeros.push_back(count0);
                }
            if(count1 > 0){
                    lengthOnes.push_back(count1);
                    count1=0;
                }

            //cout<<"Substring len of 1: ";
            for(i=0; i<lengthOnes.size(); i++){
                //cout<<lengthOnes[i]<<" ";
                forOnes = a*lengthOnes[i]+b;
            }
            //cout<<endl;

            //cout<<"Substring len of 0: ";
            for(i=0; i<lengthZeros.size(); i++){
                //cout<<lengthZeros[i]<<" ";
                forZeros = a*lengthZeros[i]+b;
            }
            //cout<<endl;


            if(zeros > ones){
                if(ones > 0)
                    ans = zeros*a+b+forOnes;
                else 
                    ans = zeros*a+b;
                //cout<<"forOnes: "<<forOnes<<endl;
            }else{
                if(zeros > 0)
                    ans = ones*a+b+forZeros;
                else
                    ans = ones*a+b;
                //cout<<"forZeros: "<<forZeros<<endl;
            }
        }
        cout<<ans<<endl;
    }
}
