/*

You are given a sorted array of numbers, and followed by number of queries, for each query if the queried number is present in the array print its position, 
else print -1.

Input
First line contains N and Q, number of elements in the array and number of queries to follow,

Second line contains N numbers, elements of the array, each number will be -10^9 <= ai <= 10^9, 0 < N <= 10^5, 0 < Q <= 5*10^5

Output
For each element in the query, print the elements 0 based location of its first occurence, if present, otherwise print -1.

Example
Input:
5 4
2 4 7 7 9
7
10
4
2

Output:
2
-1
1
0

*/


#include <bits/stdc++.h>

using namespace std;

int n, q; 
int arr[112345];

int binary_search(int query){
    int l = 0;
    int r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(query == arr[mid] && query > arr[mid-1]) return mid;
        else if(query == arr[mid] && query == arr[mid-1]) r = mid - 1;
        else if(query > arr[mid]) l = mid + 1;
        else if(query < arr[mid]) r = mid - 1;
    }
    return -1;
}

int main(){

    cin >> n >> q;
    int query;

    for(int i = 0 ; i < n ; i++) scanf("%d", &arr[i]);

    for(int i = 0 ; i < q ; i++){
        cin >> query;
        cout << binary_search(query) << "\n";
    }
}