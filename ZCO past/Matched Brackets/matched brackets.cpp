using namespace std;
#include "bits/stdc++.h"
#define elif else if
#define len(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define ceil(x, y) (x + y-1)/y
#define int long long

bool cmp(const pair<int,int> &a, const pair<int,int> &b);

int32_t main() { cin.tie(nullptr)->sync_with_stdio(false);	

	int n;cin>>n; 
	vector<int> v(n);
	for(auto &i : v) cin>> i; 

	int mxdep = INT_MIN;
	int currdep{};
	for(int i {}; i < n; ++i) {
		if(v[i] == 2) {
			--currdep;
		}
		
		else {
			++currdep;
			mxdep = max(mxdep, currdep);
		}		
	}
	cout << mxdep << ' ';

	currdep = 0;
	for(int i {}; i < n; ++i) {
		if(v[i] == 2) --currdep;
		else {
			++currdep;
			if(currdep == mxdep) {
				cout << i+1 << ' ';
				break; 
			}
		}
	}
	currdep = 0;
	int val {};
	vector<pair<int, int>> ans{{0, 1}};// len, indx
	int k {};
	for(int i {}; i < n; ++i) {
		 if(v[i] == 1) ++currdep, ++val;
		 else --currdep, ++val;
			
		if(i == 0) continue;
		if(currdep == 0) {

		 	ans.push_back({0, i+2});
		 	ans[k].first = val;
		 	currdep = 0;
		 	val = 0;
			++k;
		}
	}
	ans.pop_back();

	sort(all(ans), cmp);

	cout << ans[0].first << ' ' << ans[0].second << '\n';
	return 0;
}

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
	if(a.first != b.first) 
		return a.first > b.first;
	
	return (a.second < b.second);
}
/*
6/23/2021 
3:41 am :dread:
*/
// taskkill /IM "3.exe" /F
