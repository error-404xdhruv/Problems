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
        l n, x;
        cin >> n >> x;
        if ((n & 1) == 1)
        {
            if (x > (n / 2) + 1)
            {
                cout << -1 << endl;
            }
            else
            {
                string s;
                int count = 0, i = 0;
                char ch = 'a';
                s[0] = 'a';
                while (i <= n / 2)
                {
                    s += ch;
                    count++;
                    ch++;
                    if (count == x)
                    {
                        ch = 'a';
                        count = 0;
                    }
                    i++;
                }
                int j = n / 2 - 1;
                while (s.length() <= n && j >= 0)
                {
                    s += s[j];
                    j--;
                }
                cout << s << endl;
            }
        }
        else
        {
            if (x > n / 2)
            {
                cout << -1 << endl;
            }
            else
            {
                string s;
                int count = 0, i = 0;
                char ch = 'a';
                s[0] = 'a';
                while (i < n / 2)
                {
                    s += ch;
                    count++;
                    ch++;
                    if (count == x)
                    {
                        ch = 'a';
                        count = 0;
                    }
                    i++;
                }
                int j = n / 2 - 1;
                while (s.length() <= n && j >= 0)
                {
                    s += s[j];
                    j--;
                }
                cout << s << endl;
            }
        }
    }

    return 0;
}