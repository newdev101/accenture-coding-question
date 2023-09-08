#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll N = 1e5 + 5;
int go(int arr[], int n)
{
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] == -1)
        //     continue;
        int tempInd = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == -1)
                continue;

            int leftR = j - arr[j];
            if (leftR <= i)
                tempInd = j;
        }
        if(arr[tempInd]==-1)return -1;
        vec.push_back(tempInd);
        cout<<tempInd<<endl;
        i = tempInd + arr[tempInd];
    }
    // for(auto it: vec)cout<<it<<endl;
    return vec.size();
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n=11;
        // cin >> n;

        int arr[n] = {-1, 5, 5, 3, 5, 0, 0, 2, -1, 3, -1};
        // for (int i = 0; i < n; i++)
        //     cin >> arr[i];
        cout << go(arr, n);
    }
    return 0;
}
