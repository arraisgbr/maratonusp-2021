/*

https://codeforces.com/problemset/problem/22/A

*/

#include<iostream>
#include<set>

using namespace std;

int main(){

    int n; cin >> n;
    set<int> sequence;

    for(int i = 0 ; i < n ; i++){
        int aux; cin >> aux;
        sequence.insert(aux);
    }

    auto it = sequence.begin();
    if(++it != sequence.end())
        cout << *it << endl;
    else cout << "NO" << endl;

}