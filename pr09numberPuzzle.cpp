/*
    url: https://youtu.be/KN_IWKDpIrc?list=PLnfCacCyFMlZZzR53Tw3Dp5DEargnMQRQ
    Numbers Puzzle:
Given a set of numbers, one can arrange them in any order but it pays a penalty equal to the sum of the abolute difference between adjacent numbers.

return the minimum penalty that must be paid

input specification:
input1: length of an array of numbers(2<input<10001)
input2: integer array(1<=input[i]<=10000)

example 1:
input 1: 3
input 2: {1,3,2}

output : 2  ----> (2-1) + (3-2)

*/

#include <iostream>
#include<algorithm>  // for sort()

using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(int arr[],int n)
{
    int sum=0;
   sort(arr,arr+n);
   for(int i=1; i<n; i++){
    sum+= abs(arr[i]-arr[i-1]);
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

        int arr[n]={0};
        go(arr,n);
    }
    return 0;
}
