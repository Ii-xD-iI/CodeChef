#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test Int t; cin>>t; while(t--)
// #define 

using namespace std;

int main(){
    GS;
    test{
    	string s;cin>>s; 
    	bool ye = false; 
    	if(s.size()<3){cout << "Bad" << endl;continue;}
    	for(size_t i {};i<s.size()-2;i++){
    		if(s[i]-'0'==1){
    			if(s[i+1]-'0'==0&&s[i+2]-'0'==1)ye=true;
    		}
    		elif(s[i]-'0'==0){
				if(s[i+1]-'0'==1&&s[i+2]-'0'==0)ye=true;
			}
    	}
    	cout << (ye?"Good":"Bad") << endl;
    }
    return 0;
}
/*
12:15 PM
9/17/2020 m/dd/yyyy
*/
