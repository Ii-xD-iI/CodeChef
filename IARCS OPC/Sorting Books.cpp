/*
Full sol: DP + Bsearch O(nlogn)
partial is prolly naive lis of complexity O(N^2)
*/
using namespace std;
#include "bits/stdc++.h"
#define len(Z) (int)(Z).size()
#define all(Z) (Z).begin(), (Z).end()
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n;cin>>n;
	vector<int> v(n);
	for(int i{};i<n; ++i) {
		cin>>v[i];
	}
	vector<int> lis{v[0]};
	for(int i=1;i<n;++i)  {
		if(v[i] > lis[len(lis)-1]) lis.push_back(v[i]);

		else lis [ lower_bound(all(lis), v[i]) - lis.begin() ] = v[i];
	}
	cout << n - len(lis);//principle of bijection
	return 0;
}
