#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = a;
    while (a >= b)
    {
        count += a / b;
        a = a / b + a % b;
    }

    cout << count << endl;

    return 0;
}