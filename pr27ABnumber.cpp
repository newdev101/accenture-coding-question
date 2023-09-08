/*
    There is a series of words consisting of only 'A' 'B' 'C' 'D' 'E' the words forming fromt these sequence represent a number. You are given a sting str, your tak is to find the number represented by the string

NOTE: 
Following strings represent the numbers from 1 to 10 respectively
"A","B","C","D","E","AA","AB","AC","AD", and "AE",

Input format:
the input consists of a single line:
	the line contains the string str.
The input will be read from the STDIN by the candidate

Output Format:
print a number represented by the string str.
The output will be matched to the candidate's output printed on the STDOUT.

Constraints:
 1 <= length of the string str <= 20

Example:
Input: BA
Output: 11

input : ABDEDEBC
output:
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go()
{
 string str;
 cin>>str;

 
 int num=0;
 int pos=0;
 for(int i=str.length()-1; i>=0; i--){
    int dig = str[i]-'A'+1;
    num += (dig * pow(5,pos));
    pos++;
 }  
 cout<<num<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        go();
    }
    return 0;
}
