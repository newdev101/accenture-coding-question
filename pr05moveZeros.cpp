/*
    Given an integer array, move all zeroes to end of the array, keeping the relative order of non-zero elements same.

    input: {1,2,0,0,0,3,6}
    output: {1,2,3,6,0,0,0}

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(int n, int arr[])
{
   int j=0;
   for(int i=0; i<n; i++){
    if(arr[i]!=0){
        arr[j]=arr[i];
        j++;
    }
   }
   for(int i=j; i<n; i++){
    arr[i]=0;
   }

}
int main()
{
    int t = 1;
    cin >> t;
    while (t--){
       int n;
       cin>>n;

       int arr[n]={0};
       for(int i=0; i<n; i++)cin>>arr[i];
       go(n,arr);
    }
    return 0;
}
