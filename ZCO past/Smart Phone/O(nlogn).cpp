#include "bits/stdc++.h"
//PRAY :ORZ FENCING: orz orz orz orz orz 
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
//pray :stefan: orz orz orz orz orz orz orz
//pray :foshy: orz orz orz orz orz orz orz
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define elif else if

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    long long max=INT_MIN;
    long long inimax{};
    int n; cin>>n; 
    vector<int> v(n);
    for(int i {};i<n;i++)cin>>v[i];
    sort(all(v));
    for(int i {};i<n;i++){
        for(int j=i;j<n;j++){
            inimax+=v[i];
        }
        if(inimax>max){max=inimax;}
        inimax=0;
    }
    cout <<  max << endl; 
    return 0;
}
//TASKKILL /F /IM main.exe

/*
4:57 PM
9/29/2020
*/
