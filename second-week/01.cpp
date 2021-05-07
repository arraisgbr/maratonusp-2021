/*

https://codeforces.com/problemset/problem/1207/A

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t; cin >> t;
    int b, p, f;
    int h, c;

    for(int i = 0 ; i < t ; i++){
        cin >> b >> p >> f;
        cin >> h >> c;
        int ans = 0;
        if(h > c){
            while(p > 0 && b > 1){
                p--;
                b -= 2;
                ans += h;
            }
            while(f > 0 && b > 1){
                f--;
                b -= 2;
                ans += c;
            }
        }
        else{
            while(f > 0 && b > 1){
                f--;
                b -= 2;
                ans += c;
            }
            while(p > 0 && b > 1){
                p--;
                b -= 2;
                ans += h;
            }
        }
        
        cout << ans << endl;
        
    }
}