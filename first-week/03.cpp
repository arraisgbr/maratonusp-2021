/*

https://codeforces.com/problemset/problem/110/A

*/

#include<iostream>

using namespace std;

int main(){

    string s;
    int count = 0;
    cin >> s;

    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7') count++;
    }

    if(count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}