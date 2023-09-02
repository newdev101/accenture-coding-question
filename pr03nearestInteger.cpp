/*
    url: https://youtu.be/KyCOQmF8Imo?list=PLnfCacCyFMlZZzR53Tw3Dp5DEargnMQRQ


    int nearestInteger(int num, int m)
    Implement the following function to find the nearest integer to num:
        1) Number is divisible by m.
        2) Number is nearest to "num" (have least distance from numb)

    note: if there are two numbers with the least distance from num then return the larger num.

*/

#include <iostream>
#include <vector>

using namespace std;

int nearestInteger(int num, int m)
{
    for (int i = 1;; i++)
    {
        if ((num + i) % m == 0)
        {
            return num + i;
        }
        else if ((num - i) % m == 0)
        {
            return num - i;
        }
    }
}

int main()
{
    cout << nearestInteger(26, 3) << endl;
}