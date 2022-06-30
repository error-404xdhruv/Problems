#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n, k;
        cin >> n >> k;
        if (n == 0)
        {
            if (k == 0)
            {
                cout << "Off" << endl;
            }
            else
            {
                cout << "On" << endl;
            }
        }
        else if (k == 0)
        {
            if (n % 4 == 0)
            {
                cout << "Off" << endl;
            }
            else
            {
                cout << "On" << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << "On" << endl;
            }
            else
            {
                cout << "Ambiguous" << endl;
            }
        }
    }

    return 0;
}