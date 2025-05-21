#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
//#define int long long
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
//#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
void solve() {
ll n;
cin >> n;
string resp;
cout << "mul 9\n";
cout.flush();
cin >> resp;
if (resp == "-1") return;
 
cout << "digit\n";
cout.flush();
cin >> resp;
if (resp == "-1") return;
 
cout << "digit\n";
cout.flush();
cin >> resp;
if (resp == "-1") return;
cout << "add " << (n - 9) << "\n";
cout.flush();
cin >> resp;
if (resp == "-1") return;
cout << "!\n";
cout.flush();
cin >> resp;
if (resp == "-1") return;
 
 
}
 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int tests; cin >> tests;
for (int i = 0; i < tests; ++i)
solve();
}
