/*
    Given a string of maximum length 1000 representing a large number, output its remainder modulo 11

    input 1: "121"
    output 1: 0

    input 2: "1345"
    output2: 3
*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(string str)
{
   int num = stoi(str);
   cout<<num%11<<endl;
}
int main()
{
    int t = 1;
    while (t--){
        string str;
        cin>>str;

        go(str);
    }
    return 0;
}
