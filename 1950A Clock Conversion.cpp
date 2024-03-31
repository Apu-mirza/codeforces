#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int h = stoi(s.substr(0, 2));
        if (h == 12) {
            cout << s << " PM\n";
        } else if (h == 0) {
            cout << "12" << s.substr(2, 3) << " AM\n";
        } else if (h > 12) {
            int nh = h - 12;
            if (nh <= 9)
                cout << 0 << to_string(nh) << ":" << s.substr(3, 2) << " PM\n";
            else
                cout << to_string(nh) << ":" << s.substr(3, 2) << " PM\n";
        } else {
            cout << s << " AM\n";
        }
    }
    return 0;
}
 
