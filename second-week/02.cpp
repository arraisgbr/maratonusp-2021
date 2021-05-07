/*

https://www.spoj.com/problems/SMPSEQ3/

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, m; cin >> n;
    int arr1[104], arr2[104];
    vector<int> ans;
    for(int i = 0 ; i < n ; i++) cin >> arr1[i];
    
    cin >> m;
    for(int i = 0 ; i < m ; i++) cin >> arr2[i];

    int i = 0, j = 0;
    while(i < n){
        if(arr1[i] > arr2[j]) j++;
        else if(arr1[i] == arr2[j]){
            i++; 
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
        }
    }

    for(auto x : ans) cout << x << " ";

    cout << endl;
}