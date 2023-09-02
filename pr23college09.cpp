#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int go(string str)
{
    int sum=0;
   if(str.length()==0)return 0;
   for(int i=0; i<str.length(); i++){
        int temp = 1 * pow(10,str[i]-'A');
        sum+=temp;
   }
   return sum;

}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        string str;
        cin>>str;
        cout<<go(str);
    }
    return 0;
}
