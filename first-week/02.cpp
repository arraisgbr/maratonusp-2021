/*

https://codeforces.com/problemset/problem/977/A

*/

#include<iostream>

#define ll long long

using namespace std;

int main(){

    ll n;
    int k;
    cin >> n >> k;

    for(int i = 0 ; i < k ; i++){
        if(n % 10 == 0) n /= 10;
        else n--;
    }

    cout << n << endl;

}