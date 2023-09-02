#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int digitSum(int n){
    int ans=0;
    while(ans>=1){
        int dig = n%10;
        ans += dig;
        n = n/10;
    }
    return ans%10;
}
void go(int arr[], int n)
{
    int ans=0;
    int funAdd=0,allSum=0;
    for(int i=0; i<n; i++){
        funAdd += digitSum(arr[i]);
        allSum += arr[i];
        funAdd %= 10;
        allSum %= 10;
    }
    cout<<funAdd-allSum<<endl;

}


int main()
{
    int t = 1;
    cin >> t;
    while (t--){
        int n;
        cin>>n;

        int arr[n]={0};
        for(int i=0;i<n; i++)cin>>arr[i];
        go(arr,n);
    }
    return 0;
}
