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
    int a=100,b=50,c=10,d=5,e=2;
    test{
    	int n;cin>>n;
		int cnt{};
   	    while(n>0){
    		if(n>=a){cnt += n/a; n%=a;}
 	   		elif(n>=b){cnt += n/b; n %=b;}
 	   		elif(n>=c){cnt += n/c; n %=c;}
 	   		elif(n>=d){cnt += n/d; n %= d;}
 	   		elif(n>=e){cnt += n/e; n %=e;}
 	   		else {cnt+=n;n=0;}
 	   }
 	   cout << cnt << endl;
	}

    return 0;
}
