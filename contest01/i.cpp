#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n; cin >> n;
    int pontos[] = {15, 12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> pos;
    int dinheiros = n;

    int i = 0;
    while(n > 0){
        if(n - pontos[i] >= 0){
            n -= pontos[i];
            pos.push_back(i+1);
        }
        else i++;
    }

    cout << pos.size() << endl;
    
    for(auto x : pos) cout << x << " ";

    cout << endl;

}