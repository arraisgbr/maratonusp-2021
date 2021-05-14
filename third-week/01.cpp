/*

https://codeforces.com/problemset/problem/492/B

*/

#include<iostream>
#include<algorithm>
#include<iomanip>

#define ll long long

using namespace std;

int main(){

    int n; cin >> n;
    ll l; cin >> l;
    ll street[1123];

    for(int i = 0 ; i < n ; i++) cin >> street[i];

    sort(street, street + n);

    double max_dist = max(street[0] - 0, l - street[n-1]);
    double max_dist2 = -1;

    for(int i = 0 ; i < n-1 ; i++)
        max_dist2 = max(max_dist2, double((street[i+1] - street[i])));
    
    max_dist2 = max_dist2 / 2;
    max_dist = max(max_dist, max_dist2);
    cout << setprecision(10) << fixed;
    cout << max_dist << endl;

}