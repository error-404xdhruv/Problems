#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c << " " << b + c << " " << c << endl;
    }

    return 0;
}