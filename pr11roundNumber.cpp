/*
url : https://youtu.be/1ap5U00dxK0
Write an algorithm to determine if a number n is round number.
A round number is a number defined by the following process:
starting with any positive integer, replace the number by the sum of the squres of its digits. Repeat the process until the number equals 1(where it will stay), or it loops endlessly in a cycle which does not include 1.

those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
Input: n= 19;
output: true

Explanation: 1^2+9^2 = 82 8^2+2^2 = 68  6^2+8^2 = 100  1^2+0^2+0^2 = 1
*/

#include <iostream>
#include <unordered_set>

using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int squre(int n){
    int ans=0;
    while(n>=1){
        int digit = n%10;
        ans += digit*digit;
        n = n/10;
    }
    return ans;
}
void go(int n)
{
    unordered_set<int>unset;
    while(n!=1 && unset.find(n)!=unset.end()){
        n = squre(n);
    }
    if(n==1)cout<<"good"<<endl;
    else cout<<"not good"<<endl;

}
int main()
{
    int t = 1;
    cin >> t;
    while (t--){
        int n;
        cin>>n;

        go(n);
    }
    return 0;
}
