/*

https://www.spoj.com/BSCPROG/problems/SMPSEQ7/

*/

#include<iostream>

using namespace std;

int main(){

    int n; cin >> n;
    int a[110];
    int j;
    bool ok = true;

    for(int i = 0 ; i < n ; i++) cin >> a[i];

    if(a[0] > a[1]){
        for(j = 1 ; j < n ; j++)
            if(a[j] <= a[j+1]) break;
        j++;
        while(j < n-1){
            if(a[j] >= a[j+1]){
                ok = false;
                break;
            }
            j++;
        }
    } else{
        for(j = 1 ; j < n ; j++)
            if(a[j] >= a[j+1]) break;
        j++;
        while(j < n-1){
            if(a[j] <= a[j+1]){
                ok = false;
                break;
            }
            j++;        
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

}
