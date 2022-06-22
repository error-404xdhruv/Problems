#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

bool isPowerTwo(l n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    l x;
    cin >> x;
    if (isPowerTwo(x))
    {
        cout << 1 << endl;
    }
    else
    {
        l count = 0;
        while (x > 1)
        {
            if ((x & 1) == 1)
            {
                count++;
            }
            x /= 2;
        }
        cout << count + 1 << endl;
    }

    return 0;
}