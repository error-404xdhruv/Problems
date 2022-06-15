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
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = b + 1; i <= a; i++)
        {
            if (i % 5 == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}