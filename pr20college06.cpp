#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int findPivot(vector<int>vec){
    int s=0,e=vec.size()-1;
    int m=s+(e-s)/2;
    while(s<e){
        m=s+(e-s)/2;
        if(vec[m]>vec[m-1] && vec[m]>vec[m+1])return m;
        // else if(vec[m] > vec[m-1] && vec[m]<vec[m+1])s=m+1;
        else if(vec[m]<vec[m+1]) s=m+1;
        else e=m-1;

        cout<<"S="<<s<<"   e="<<e<<"   m="<<m<<endl;
    }
    return s;
}
void go(vector<int>vec)
{
    int sum1=vec[0],sum2=0;
    int flag=1;
  for(int i=1; i<vec.size(); i++){
    if(vec[i]>vec[i-1])sum1+=vec[i];
    else if(flag && vec[i]<vec[i-1]){
        flag=0;
        sum2+=vec[i]+vec[i-1];
    }
    else sum2+=vec[i];
  }

  cout<<sum1<<" "<<sum2<<endl;
  cout<< sum1*sum2;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++)cin>>vec[i];

        cout<<findPivot(vec);
    }
    return 0;
}
