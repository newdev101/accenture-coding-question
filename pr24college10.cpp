#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int go(vector<int>vec1, vector<int>vec2)
{
   sort(vec1.begin(),vec1.end());
   sort(vec2.begin(),vec2.end());
   int temp1=abs(vec1.front()-vec2.back());
   int temp2=abs(vec2.front()-vec1.back());
   return max(temp1,temp2);
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        int n,m;
        cin>>n>>m;

        vector<int>vec1(n),vec2(m);
        for(int i=0; i<n; i++)cin>>vec1[i];
        for(int j=0; j<n; j++)cin>>vec2[j];
        cout<<go(vec1,vec2);
       
    }
    return 0;
}
