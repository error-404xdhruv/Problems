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
        l n;
        cin >> n;
        string s;
        cin >> s;

        l st = 0, e = n - 1, ans = 0;
        while (st <= e)
        {
            if (s[st] == '(' and s[e] == ')')
            {
                st++, e--;
            }

            else if ((s[st] == ')' and s[e] == ')'))
            {
                st++;
                ans++;
            }
            else if ((s[st] == '(' and s[e] == '('))
            {
                e--;
                ans++;
            }

            // one more case can be s[st] = ')' and s[e] = '(' , so in this case we would remove both the brackets
            else
            {
                st++, e--;
                ans += 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}