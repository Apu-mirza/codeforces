#include <iostream>
#include <map>

#define int long long

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    string name[n];  

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }

    for (int i = 0; i < n; i++) {
        if (mp[name[i]] > 0) {
            cout << name[i] << mp[name[i]] << endl;
        } else {
            cout << "OK" << endl;
        }
        mp[name[i]]++;  
    }

    return 0;
}
