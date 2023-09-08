/*
 your are given two array vote[]  ans age[] of size n;
 vote[] stores all the candidate who is voted by the ith voter
 age[] stores age of the ith  voter

 your have to print the candidate who get the most vote;

 ***NOTE: i) the vote a voter is counted only his/her age is greater or eqal to 18
          ii) if multiple candidate gets the highest vote then return -1;
          iii) if no valid wining candidate is not present then return -1;
*/

#include<bits/stdc++.h>
using namespace std;

int go(){
    int n;
    cin>>n;

    vector<int>vote(n);
    vector<int>age(n);

    for(int i=0;i<n;i++)cin>>vote[i];
    for(int j=0;j<n;j++)cin>>age[j];

    unordered_map<int,int>unmap;
    for(int i=0;i<n;i++){
        if(age[i]>=18)unmap[vote[i]]++;
    }

    int maxi=-1;
    int ans=-1;
    for(auto it:unmap){
        if(it.second>maxi){
            maxi=it.second;
            ans=it.first;
        }
    }
    if(maxi==-1)return -1;

    int cnt=0;
    for(auto it:unmap)if(it.second==maxi)cnt++;
    if(cnt>1)return -1;
    return ans;

}

int main(){
    cout<<go()<<endl;
}