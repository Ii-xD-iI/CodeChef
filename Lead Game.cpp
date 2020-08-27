#include "bits/stdc++.h"

#define gOdSpEeD ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define cy cout << "YES" << end 
#define cn cout <<"NO" << end
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;

int main () {
    gOdSpEeD;
    int n ;cin>>n;
    int lead{};
    int player{};
    int xlead{};
    int ylead{};
    for(int i {};i<n;i++){
    	int p1,p2;
    	cin>>p1>>p2;
    	xlead += p1;
    	ylead += p2;
    	if(abs(xlead-ylead)>lead){lead = abs(xlead-ylead);(xlead>ylead?player=1:player=2);}
    }//test
    cout << player << " " << lead << endl;

    return 0;
}
