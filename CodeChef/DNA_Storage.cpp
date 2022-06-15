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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (s[i] == '0' and s[i + 1] == '0')
            {
                cout << 'A';
            }
            else if (s[i] == '0' and s[i + 1] == '1')
            {
                cout << 'T';
            }
            else if (s[i] == '1' and s[i + 1] == '0')
            {
                cout << 'C';
            }
            else
            {
                cout << 'G';
            }
        }
        cout << endl;
    }

    return 0;
}