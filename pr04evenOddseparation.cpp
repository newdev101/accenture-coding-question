
/*
    given an array , write a function that segregates even and odd numbers. The functions should put all even first then odd numbers. 

    ** order doesn't matter;
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;

void go(int n, int arr[])
{
   int l=0,r=n-1;

   while(l<r){
    if(arr[l]&1 && !arr[r]&1 ){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    else if(arr[l]&1 && arr[r]&1){
        r--;
    }
    else if(!arr[l]&1 && !arr[r]&1){
        l++;
    }
    else{
        l++;
        r--;
    }
   }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
       int n;
       cin>>n;

       int arr[n]={0};
       for(int i=0; i<n; i++)cin>>arr[i];

       go(n,arr);
    }
    return 0;
}
