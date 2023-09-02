/*
url: https://youtu.be/1ap5U00dxK0
there are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb. On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on).

for the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb. Return the number of bulbs that are on after n rounds.

input: n=3
output: 1


*/

#include <iostream>
#include<cmath>
// #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;


// o(1) approach
void solve(int n){
    cout<<int(sqrt(n));
}


//brut force
void go(int n)
{
    int arr[n+1]={0};
   for(int i=1; i<=n; i++){
    for(int j=i;j<=n; j=j+i){
        arr[j]++;
    }
   }

    int ans=0;
   for(int i=1; i<=n;i++){
    if(arr[i]&1)ans++;
   }
   cout<<ans;
}
int main()
{
    int t = 1;
    //cin >> t;
    while (t--){
        int n;
        cin>>n;
        go(n);
    }
    return 0;
}
