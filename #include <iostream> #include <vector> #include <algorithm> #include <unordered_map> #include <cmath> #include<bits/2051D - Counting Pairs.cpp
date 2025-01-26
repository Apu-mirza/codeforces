#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include<bits/stdc++.h>
#define int long long


using namespace std;


void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int target_low = sum - y;
    long long target_high = sum - x;

    sort(a.begin(), a.end());

    int count = 0;

    int fok = 0;
    for (int i = 0; i < n; i++) {
        int low = target_low - a[i];
        int high = target_high - a[i];

        int j_start = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();
        int j_end = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin();

        count += max(fok, j_end - j_start);
        if(j_start<=i && i<j_end) count--;
    }

    cout << count << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
