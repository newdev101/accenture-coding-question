#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go()
{
 string str;
 cin>>str;

 
 int num=0;
 int pos=0;
 for(int i=str.length()-1; i>=0; i--){
    int dig = str[i]-'a'+1;
    num += (dig * pow(5,pos));
    pos++;
 }  
 cout<<num<<endl;
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
