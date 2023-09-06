/*
url: https://youtu.be/qSA3CO1Hhgo?t=1434

Given an array containing N elements. Each element is either 0 or 5. Find the largest number devisible by 90 that can be mande using any number of elements of this array and arranging them
in any way.

exmaple: 
	input: {5,5,5,5,5,0,5,5,5,5,5,5,0,5}
	output: 55555555500

	input: {5,0}
	output: 0


*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;

int main()
{
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    int cnt5=0;
    for(int i=0; i<n; i++){
        if(vec[i]==5)cnt5++;
    }
    int cnt0=n-cnt5;

    if(cnt0==0)cout<<-1<<endl;
    else if(cnt5==0)cout<<0<<endl;
    else{
    int k = cnt5 - (cnt5%9);
    for(int i=0; i<k; i++)cout<<5;
    for(int i=0; i<cnt0; i++)cout<<0;
    }
    
    return 0;
}
