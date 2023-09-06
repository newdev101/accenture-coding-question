/*
    url:https://youtu.be/qSA3CO1Hhgo
    
    Given a number as input print the total count of numbers which have at least one '3' as digit in their 
    decimal representation
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
bool check(int n){
    cout<<n<<endl;
    while(n>0){
        int dig= n%10;
        if(dig==3)return false;
        n=n/10;
    }
    return 1;
}
void go()
{
  int n=1000;
  cin>>n;
  int cnt=0,temp=n;
  int fact1=0,fact2=1;
  while(n>0){
    int dig = n%10;
    if(dig<3) cnt += (dig*fact1);
    else cnt += ((dig-1)*fact1)+fact2;
    
    n=n/10;
    fact1=fact1*9+fact2;
    fact2*=10;
  } 
  cout<<cnt<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        go();
    }
    return 0;
}
