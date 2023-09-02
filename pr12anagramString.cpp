/*
    Impliment a fuction wich takes two string as input and detect whether the given strings 
    are anagrm or not

    "race" == "care"
    "there" == "three"
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
bool go(string str1, string str2)
{
   if(str1.length()!=str2.length())return 0;
   sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());

   if(str1==str2)return 1;
   else return 0;
}


int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        string str1,str2;
        cin>>str1>>str2;
        if(go(str1,str2))cout<<"yes";
        else cout<<"no";
    }
    return 0;
}
