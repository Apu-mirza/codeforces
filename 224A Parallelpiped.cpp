#include <iostream>
#include<bits/stdc++.h>
#include <numeric>  // For std::gcd
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int gcd1;
    int ans;
    if(a==b && b==c){
        ans = 12*a;
    }else
    {
        if(a==b && b!= c){
        gcd1 = gcd(b, c);
    }else if(a!=b && b==c){
        gcd1 = gcd(b, c);
    }else if(a!=c && b==c){
        gcd1 = gcd(c, a);
    }else if(a!=b && b!=c){
        gcd1 = gcd(a, b);
    }
    cout<<"GCD: "<<gcd1<<endl;
    ans = 4*(a/gcd1)+4*(b/gcd1)+4*(c/gcd1);
    }
    cout<<ans<<endl;
}
