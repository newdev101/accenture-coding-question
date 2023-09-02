/*

url: https://youtu.be/wuJY2SlUl7o
Given an NxN matrix, check if it is a unique matrix or not. Return "True" if it is a unique matrix or not.

Unique Matrix is a matrix where each row and column contains all integers from 1 ro N.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
bool go(vector<vector<int>>vec, int n)
{
   unordered_set<int>row;
   unordered_set<int>col;

   for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
        row.insert(vec[i][j]);
        col.insert(vec[j][i]);
    }
    if(row.size()!= n || col.size()!=n)
    return 0;
   }
   return 1;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){

        int n;
        // cin>>n;

        vector<vector<int>>vec(n,vector<int>(n,0));
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        cin>>vec[i][j];

        if(go(vec,n))cout<<"yes";
        else cout<<"no";
    }
    return 0;
}
