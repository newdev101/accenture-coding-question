#include <iostream>
#include <vector>

using namespace std;

bool isDivisible(int num, vector<int>& vec) {
    for (int divisor : vec) {
        if (num % divisor == 0) {
            return true;
        }
    }
    return false;
}

int go(vector<int> vec, int n, int k) {
    int count = 0;
    int current = 0;
    int sum = 0;

    while (count < k) {
        current++;
        if (!isDivisible(current, vec)) {
            sum += current;
            count++;
        }
    }
    return current;
}

int main() {
   int t=1;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>vec(n);
        for(int i=0; i<n; i++)cin>>vec[i];
        cout<<go(vec,n,k);
    }
    return 0;
}
