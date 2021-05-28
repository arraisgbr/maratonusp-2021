#include<iostream>
#include<set>

using namespace std;

int main(){

    int n; cin >> n;
    set<pair<int,int>> albuns;

    for(int i = 0 ; i < n ; i++){
        int a, t; cin >> a >> t;
        albuns.insert(make_pair(a, t));
    }

    auto it = albuns.begin();
    int ans = it->first - it->second;
    bool ok = true;

    for(it ; it != albuns.end() ; it++){
        if(ok and it->first - it->second != ans) ok = false;
    }

    if(ok) cout << "idades corretas" << endl;
    else cout <<  "mentiu a idade" << endl;
    
}