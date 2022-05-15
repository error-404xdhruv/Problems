#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    l n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        l n1 = n / 10, n2 = (n / 100)*10 + (n % 10);
        cout << max(n1, n2) << endl;
    }

    return 0;
}