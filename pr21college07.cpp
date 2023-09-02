#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int myGcd(int a,int b)
{
//    cout<<__gcd(a,b)<<endl;
    return b == 0 ? a : myGcd(b, a % b);
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--){
        int a,b;
        cin>>a>>b;
        cout<<myGcd(a,b);
    }
    return 0;
}
