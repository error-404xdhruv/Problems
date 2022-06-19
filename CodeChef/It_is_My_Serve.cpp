#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        if (p+q == 0)
        {
            cout << "Alice" << endl;
        }
        else if ((p + q) % 4 == 0 or (p + q) % 4 == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}