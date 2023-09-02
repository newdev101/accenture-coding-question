/*
video url: https://youtu.be/1-zrP_RPyG0?list=PLnfCacCyFMlZZzR53Tw3Dp5DEargnMQRQ

*/



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;


// optimized approach
void helper(int n, int arr[])
{
    stack<int> s;
    s.push(arr[n - 1]);
    arr[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        int x = arr[i];
        while (s.size() > 0 and x < s.top())
        {
            s.pop();
        }

        if (s.size() == 0)
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(x);
    }
 
}


// brutforce approach
void go(int n, int arr[])
{
    int duplicate[n] = {0};
    duplicate[n - 1] = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                duplicate[i] = arr[j];
                break;
            }
            duplicate[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = duplicate[i];
}



int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        go(n, arr);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
