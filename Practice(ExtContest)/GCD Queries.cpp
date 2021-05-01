#include "bits/stdc++.h"

#define len(Z) (int)(Z).size()
#define elif else if
#define all(Z) (Z).begin(), (Z).end()
#define ceil(X,Y) (X + Y-1)/Y

using namespace std;

void IO(string Bessie);

const int MAXN=1e5+7, INF = 2e9+7, MOD = 1e9+7;//check the limits u dum dum
const long long INFLL = 2e18+7;

void Solve(){

	int n,q;cin>>n>>q;
	
	int v[n+7];
	for(int i=1;i<=n;++i) cin>>v[i];

	int prefgcd [MAXN], suffgcd[MAXN];
	prefgcd[0] = 0,suffgcd[n+1] = 0;

	for(int i=1;i<n+1;++i) 
		prefgcd[i] = __gcd(prefgcd[i-1], v[i]);
	
	for(int i = n;i>0;--i) 
		suffgcd[i] = __gcd(suffgcd[i+1],v[i]);
	
	while(q-->0) {
		int l,r;
		cin>>l>>r;

		long long Gcd{};
		Gcd = __gcd(prefgcd[l-1], suffgcd[r+1]);

		cout << Gcd << '\n';
	}
}

int32_t main() {
	IO("");
    	
	int Dolphin_OFZ; cin>>Dolphin_OFZ; while(Dolphin_OFZ-->0)
		
		Solve();
    return 0;
}

void IO(string Bessie = "") {   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".txt").c_str(), "r", stdin);
        freopen((Bessie+".txt").c_str(), "w", stdout);
    } 
}
// taskkill /IM "A.exe" /F
