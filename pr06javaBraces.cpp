/*
    In java braces are used to group statement and declarations together. Each opening brace '{' should be accompanied with a closing brace '}', otherwise compilation of code would result in a failure.

    Given a peice of code determine whether the code will give a compilation error or not?

    input 1: {{{}}
    output1: error

    input2: {{}{{{}}}}
    output2: noError

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(string str)
{
    int cnt=0;
   for(int i=0; i<str.size(); i++){
    if(str[i]=='{')cnt++;
    else cnt--;
    if(cnt<0){
        cout<<"error"<<endl;
        return;
    }
   }
   if(cnt==0)cout<<"no error"<<endl;
   else cout<<"error"<<endl;
}
int main()
{
    int t = 1;
   // cin >> t;
    while (t--){
       string str;
       cin>>str;

       go(str);
    }
    return 0;
}

