
#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
using namespace std;

bool isEightPresent(l n)
{
    while (n != 0)
    {
        if (n % 10 == 8 || n%10 == -8)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

l doFind(l n)
{
    for (l i = 1;; i++)
    {
        if (isEightPresent(i + n))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    l a;
    cin >> a;
    cout << doFind(a) << endl;

    return 0;
}
