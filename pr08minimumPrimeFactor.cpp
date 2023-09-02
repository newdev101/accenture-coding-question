/*
    Implement the follwing function:
    int DiffMinPrime(int n)

    The function accepts an integer 'n'. Implement the function to find the minimum prime factor of 'n' and return difference of 'n' with its minimum prime factor

    assumption: n>1
    input 1: 350
    output1: 348

    exp: 350 = 2 * 5 * 5 * 7
    minimum prime factor is 2, therefore ans = 350 -2 = 348

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(int n)
{
   if(!n&1){
    cout<<n-2;
    return;
   }
   
   for(int i=3; i<n; i++){
    if(n%i==0){
        cout<<n-i<<endl;
        return;
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

        go(n);
    }
    return 0;
}
