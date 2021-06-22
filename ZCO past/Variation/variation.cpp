using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define len(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define ceil(x, y) (x + y-1)/y
#define int long long
int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);	

	int n, k;cin >> n >> k; 
	vector<int> v(n);
	for(auto &i : v) cin >> i; 
	sort(all(v));
	int ans{};

	for(int i {}; i < n - 1; ++i) {
		int res{};
		res += lower_bound(all(v), v[i] + k) - v.begin();
		ans += n - res;
	}
	cout << ans;
	return 0;
}
// taskkill /IM "3.exe" /F
/*
6/22/2021
*/
