/*

https://www.spoj.com/problems/UPDATEIT/

*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){

    int t; cin >> t;

    for(int i = 0 ; i < t ; i++){

        int n, u; cin >> n >> u;
        int aux[100100];
        memset(aux, 0, sizeof(aux));

        for(int j = 0 ; j < u ; j++){
            int l, r, val; cin >> l >> r >> val;
            aux[l] += val; aux[r+1] += -val;
        }

        for(int j = 1 ; j < n ; j++) aux[j] += aux[j-1];

        
        int q; cin >> q;
        for(int j = 0 ; j < q ; j++){
            int q; cin >> q; 
            cout << aux[q] << endl;
        }

    }
}