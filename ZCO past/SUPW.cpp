#include "bits/stdc++.h"
 
using namespace std;

#define all(X)   (X).begin(), (X).end()
#define test     int t;cin>>t;while(t--)
#define len(X)   (int)(X).size()
#define elif     else if
#define INF   2e9+1
// #define int      long long
#define MAXN     2e5+7



int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    vector<int> v(MAXN),dp(MAXN);
    for(int i=1;i<=n;++i) cin>>v[i];

    dp[2] = v[2],dp[1] = v[1],dp[3] = v[3];
    for(int i=4;i<=n+1;++i) {
        dp[i] = v[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
    }

    cout << dp[n+1] << '\n';
    return 0;
}
/*
either start from the first or second or third

dp[i] = minimum cost after picking the ith element

so starting from the ith element where 1 <= i <= 3 // base case
-> minimum cost would be the ith element only 

if we picked the ith element where i>3
-> we must choose atleast any one from the last 3 to keep up with the additional constraints 


ans = min(N , N-1, N-2)
*/
