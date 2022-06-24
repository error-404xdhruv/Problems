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
        int a(0), b(0);
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                a++;
            }
            else
            {
                a--;
                if (a < 0)
                {
                    a = 0, b++;
                }
            }
        }
        cout << b << endl;
    }

    return 0;
}