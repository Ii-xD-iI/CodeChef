using namespace std;
#include "bits/stdc++.h"
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	long long n ;cin>>n;
    long long l=0,x=0,p=0,y{};
    for(long long p1,p2,i {};i<n;i++){
    	cin>>p1>>p2;
    	x += p1;
    	y += p2;
    	if(abs(x-y)>l){l = abs(x-y);(x<y? p=2:p=1);}
    }
    cout << p << " " << l << endl;
	return 0;
}
