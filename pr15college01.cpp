#include <iostream>
#include<unordered_map>
// #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;

//easiest
void solve(int a, int b, int c, int d){
    int temp;
    if(a==b || a==c || a==d)temp=a;
    else if(b==c || b==d) temp = b;
    else if(c == d) temp = c;
    else temp = 0;

    temp = (a+b+c+d)-3*temp;
    cout<<temp;
}

// for brod view
void go(int a,int b,int c,int d)
{
   unordered_map<int,int>unmap;
   unmap[a]++;
   unmap[b]++;
   unmap[c]++;
   unmap[d]++;

   int unique=0,nonUnique=0;
   for(auto it:unmap){
    if(it.second==2)nonUnique+=it.first;
    else unique+=it.first;
   }
   cout<<unique-nonUnique<<endl;
}
int main()
{
    int t = 1;
   // cin >> t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        go(a,b,c,d);
    }
    return 0;
}
