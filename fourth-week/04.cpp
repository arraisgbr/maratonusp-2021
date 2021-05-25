/*

https://codeforces.com/problemset/problem/4/C

*/

#include<iostream>
#include<map>

using namespace std;

int main(){

    int n; cin >> n;
    string nick;
    map<string, int> nicks;

    for(int i = 0 ; i < n ; i++){
        cin >> nick;
        if(nicks.find(nick) == nicks.end()){
            nicks.insert(make_pair(nick, 0));
            cout << "OK" << endl;
        }
        else{
            nicks[nick]++;
            cout << nick << nicks[nick] << endl;;
        }
    }
}