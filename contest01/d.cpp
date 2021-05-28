#include<iostream>
#include<map>

#define ll long long

using namespace std;

int pe[1123456];
map<ll, ll> pessoaDia;

int main(){

    int n; cin >> n;

    for(ll i = 0 ; i < n ; i++){
        ll dia; cin >> dia;
        pessoaDia[dia]++;
    }

    auto it = pessoaDia.begin();
    it++;
    for(auto x : pessoaDia){
        it->second += x.second;
        it++;
    }

    bool ok = false;
    for(auto it = pessoaDia.rbegin() ;  it != pessoaDia.rend() ; it++){
        if(it->second % 3 == 0){
            cout << it->first << endl;
            ok = true;
            break;
        }
    }

    if(!ok) cout << -1 << endl;

}