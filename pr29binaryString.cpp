/*
    you are given binary string as input you have to count the no of good sub sequences ;
    good subsequence means those where the count of 0 and 1 are same
    input: 10011
    output: 4
    explanation: 10 1001 0011 01

*/

#include<bits/stdc++.h>
using namespace std;
int go(){
    string str;
    cin>>str;

    int n = str.length();
    int ans=0;
    for(int i=0; i<n; i++){
        int temp=0;
        for(int j=i; j<n; j++){
            if(str[j]=='0')temp++;
            else temp--;

            if(temp==0)ans++;
        }
    }
    return ans;
}

int main(){
    cout<<go()<<endl;

    return 0;
}