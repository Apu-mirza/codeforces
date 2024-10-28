#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long int
using namespace std;
int main() {

	int test;
	cin >> test;
	ll ans = 0;
	while (test--) {
		ll a, k;
		cin >> a >> k;
		ans = a;
		for (int i = 1; i < k; i++) {
			string s1 = to_string(ans);
			sort(s1.begin(), s1.end());
			int min = s1[0] - '0';
			int max = s1[s1.length() - 1] - '0';
			if (min == 0) {
				break;
			}
			ans += (max * min);
		}
		cout << ans << endl;
	}

}
