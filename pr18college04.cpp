#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
bool isPrime(int n){

}
void go(vector<int>vec, int n)
{
    unordered_set<int>primes;
    int k=2;
    int sum =vec[k];
    k++;
    
    while(k<=n){
        bool flag=1;
        for(auto it:primes){
            if(k%it==0){
                flag=0;
                break;
            }
        }
        if(flag){
            primes.insert(k);
            sum+=vec[k];
        }
        k+=2;
    }
   cout<<sum<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        int n;
        cin>>n;

        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        go(vec,n);
    }
    return 0;
}
