#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t;cin>>t;while(t--){
		int n; cin>>n; 
		vector<int> v(n);
		for(int i {};i<n;i++)cin>>v[i];
		sort(rall(v));
		long long p1=v[0];
		long long p2=v[1];
		for(int i=2;i<n;i++){
			if(i%2 == 0) p2+=v[i];
			else p1+=v[i];
		}
		if(p1>p2)cout << "first" << endl;
		elif(p1<p2)cout << "second" << endl;
		else cout << "draw" << endl;
	}
	return 0;
}
//taskkill /IM "main.exe" /F
/*
hab to sort oof 
6:35 PM
10/7/2020 mm/d/yyyy
*/
