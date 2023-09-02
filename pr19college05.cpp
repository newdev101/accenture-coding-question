#include <iostream>
#include <cmath>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
void go(int n)
{
    int cnt = 0;
    int k = n;
    while (k)
    {
        cnt++;
        int temp = sqrt(k);
        if (temp * temp == k)
            break;
        else
            k -= (temp * temp);
    }
    cout << cnt << endl;
}
int main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        go(n);
    }
    return 0;
}
