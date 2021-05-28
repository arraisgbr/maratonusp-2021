#include<iostream>
#include<cstring>

using namespace std;

string str1, str2;
int pd[1005][1005];

int lcs(int a, int b){ 
	
	if(a < 0 or b < 0) return 0;

	if(pd[a][b] >= 0) return pd[a][b];
	
	if(str1[a] == str2[b]) return pd[a][b] = 1 + lcs(a-1, b-1); // e adicionamos ele à lcs das subsequâncias restantes
	
	return pd[a][b] = max(lcs(a-1, b), lcs(a, b-1));

}

int main(){

    memset(pd, -1, sizeof(pd));

    cin >> str1 >> str2;

    int ans = lcs(str1.size(), str2.size());
    
    cout << --ans << endl;

}