#include <bits/stdc++.h>
#define l long long
using namespace std;

string doCheck(l n)
{
    if (n % 2)
    {
        return "YES";
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    if (n > 1)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        cout << doCheck(n) << endl;
    }

    return 0;
}