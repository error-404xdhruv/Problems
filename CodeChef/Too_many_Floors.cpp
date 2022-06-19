#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int decideFloor(int a)
{
    if (a >= 1 and a <= 10)
    {
        return 1;
    }
    else if (a >= 11 and a <= 20)
    {
        return 2;
    }
    else if (a >= 21 and a <= 30)
    {
        return 3;
    }
    else if (a >= 31 and a <= 40)
    {
        return 4;
    }
    else if (a >= 41 and a <= 50)
    {
        return 5;
    }
    else if (a >= 51 and a <= 60)
    {
        return 6;
    }
    else if (a >= 61 and a <= 70)
    {
        return 7;
    }
    else if (a >= 71 and a <= 80)
    {
        return 8;
    }
    else if (a >= 81 and a <= 90)
    {
        return 9;
    }
    else if (a >= 91 and a <= 100)
    {
        return 10;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << abs(decideFloor(x) - decideFloor(y)) << endl;
    }

    return 0;
}