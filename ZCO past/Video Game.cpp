//======================================================
/*
ok look
when you input a number
you don't input the newline after it
so when you use getline
you end up with an empty string
because the very next character is newline
*/
//======================================================

#include "bits/stdc++.h"
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int n,h;cin>>n>>h;
	vector<int> v(n);
	for(int i {};i<n;++i) cin>>v[i];
	string s;
	cin.ignore();
	getline(cin,s);
	bool hang = false;//no box == 0 , hab a  box == 1
	int ind{};
	for(int i {};i<(int)s.size();++i){
		if(s[i]=='0') break;
		elif(s[i]==' ') continue;
		elif(s[i]=='1' && ind>0)ind--;
		elif(s[i]=='2' && ind<n-1)ind++;
		elif(s[i]=='3' && !(hang) && v[ind]>0) {hang=true;v[ind]--;}
		elif(s[i]=='4' && hang && v[ind]<h) {hang = false;v[ind]++;}
	}
	for(auto& i: v) cout << i << " ";
	cout << endl;
	return 0;
}
//taskkill /IM "main.exe" /F
/*
8:46 PM
10/7/2020 mm/d/yyyy

1st attempt without debugging (except cin.ignore();)
*/
