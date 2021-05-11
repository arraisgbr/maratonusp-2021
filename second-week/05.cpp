/*

https://www.codechef.com/problems/FEXP

*/

#include<iostream>

#define ll long long
#define MOD 1000000007

using namespace std;

ll exp(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 0){
        ll ep = exp(a, b/2) % MOD;
        return (ep*ep) % MOD;
    }
    else{
        return (a * exp(a, b-1)%MOD);
    }
}

int main(){

    int t; cin >> t;
    ll a, b;

    for(int i = 0; i < t ; i++){
        cin >> a >> b;
        cout << exp(a, b) << endl;
    }
}