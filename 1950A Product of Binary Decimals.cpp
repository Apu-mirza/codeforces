#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int bin[100005];
    memset(bin, 0, sizeof bin);
    for(int i = 1; i <= 100004; ++i){
        string ns = to_string(i);
        int n = ns.size();
        int cnt = 0;
        for(auto i: ns) if(i == '0' or i == '1') ++cnt;
        if(cnt == n) bin[i] = 1;
        for(int j = 1; j * j <= i; ++j){
            if(i % j == 0){
                if(bin[j] and bin[i / j]){
                    bin[i] = 1;
                    break;
                }
            }
        }
    }

    while(t--) {
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '1' or s[i] == '0') ++cnt;
        }
        if(cnt == s.size()) cout << "YES\n";
        else{
            int n = stoi(s);
            int f = 0;
            for(int i = 1; i * i <= n; ++i){
                if(n % i == 0){
                    if(bin[i] and bin[n / i]){
                        f = 1;
                        break;
                    }
                }
            }
            if(f) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
