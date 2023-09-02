#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
string go(string str1, string str2)
{
    if (str1.length() == 0 || str2.length() == 0)
        return (str1 + str2);

    int len1 = str1.length();
    int len2 = str2.length();
    int len = len1 + len2;
    string ans = str1 + str2;

    int i = 0;
    while (i < len1 && i < len2)
    {
        if (str1[i] < str2[i])
        {
            ans[i] = str1[i];
            ans[len - i - 1] = str2[i];
        }
        else
        {
            ans[i] = str2[i];
            ans[len - i - 1] = str1[i];
        }
        i++;
    }

    while (i < len1)
        ans[i++] = str1[i];
    while (i < len2)
        ans[i++] = str2[i];
    return ans;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        cout << go(str1, str2);
    }
    return 0;
}
