#include <iostream>
#include <vector>
using namespace std;
#define ll long long
 
void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<ll>> v(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> v[i][j];
 
    vector<ll> x(k), y(k);
    for (ll i = 0; i < k; i++)
        cin >> x[i] >> y[i], x[i]--, y[i]--;
 
    // Step 1: For each column, count how many times it's queried
    vector<ll> colFreq(m, 0);
    // Step 2: For each row, count how many times it was "bad" in queries
    vector<ll> badFreq(n, 0);
 
    for (ll i = 0; i < k; i++) {
        colFreq[y[i]]++;
        badFreq[x[i]]++;
    }
 
    // Step 3: For each row, count how many total 1s exist in its columns that were queried
    vector<ll> result(n, 0);
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (v[i][j] == 1) {
                result[i] += colFreq[j];
            }
        }
    }
 
    // Step 4: Subtract overcounted queries where this row was bad
    for (ll i = 0; i < k; i++) {
        if (v[x[i]][y[i]] == 1) {
            result[x[i]]--;
        }
    }
 
    // Step 5: Print results
    for (ll i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
}
 
int main() {
    solve();
    return 0;
}
