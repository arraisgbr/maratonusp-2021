/*

https://www.spoj.com/problems/PT07Y/

*/

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int ans = true;
int pai[112345];
int visited[112345];
vector<int> nodes[112345];

void dfs(int v){

    visited[v] = 1;
    for(auto x : nodes[v]){
        if(visited[x]){
            if(pai[v] != x) ans = false;
            continue;
        }
        pai[x] = v;
        dfs(x);
    }
}

int main(){

    int n, m; cin >> n >> m;
    memset(pai, -1, sizeof(pai));

    for(int i = 1 ; i <= m ; i++){
        int x, y; cin >> x >> y;
        nodes[x].push_back(y);
        nodes[y].push_back(x);
    }

    dfs(1);
    for(int i = 1 ; i <= n ; i++){
        if(visited[i] == 0){
            ans = false;
            break;
        }
    }
    
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;

}