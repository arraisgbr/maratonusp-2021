/*

https://www.spoj.com/problems/BUSYMAN/

*/

#include<iostream>
#include<algorithm>

using namespace std;

struct activity{
    int ini, fim;
};

int cmp(activity a, activity b){
    return a.fim < b.fim;
}

int main(){

    int t; cin >> t;

    for(int i = 0 ; i < t ; i++){

        activity acts[100100];
        int n; cin >> n;

        for(int j = 0 ; j < n ; j++) cin >> acts[j].ini >> acts[j].fim;

        sort(acts, acts+n, cmp);

        /*
        for(int j = 0 ; j < n ; j++){
            cout << acts[j].ini << " " << acts[j].fim << endl;
        }
        */
        
        int count = 1;
        int fim = acts[0].fim;
        for(int j = 1 ; j < n ; j++){
            if(acts[j].ini >= fim){
                count++;
                fim = acts[j].fim;
            }
        }

        cout << count << endl;

    }
}