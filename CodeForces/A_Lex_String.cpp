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
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int indA = 0, indB = 0, countA = 0, countB = 0;
        vector<char> ans;

        while (ans.size() <= a.length() + b.length())
        {
            // acts as a terminating statement
            if (indA >= a.size() || indB >= b.size())
            {
                break;
            }

            if (a[indA] < b[indB] && countA < k)
            {
                ans.push_back(a[indA]);
                indA++;
                countB = 0;
                countA++;
            }

            else if (b[indB] < a[indA] && countB < k)
            {
                ans.push_back(b[indB]);
                indB++;
                countA = 0;
                countB++;
            }

            else if (countA < k)
            {
                ans.push_back(a[indA]);
                indA++;
                countB = 0;
                countA++;
            }

            else if (countB < k)
            {
                ans.push_back(b[indB]);
                indB++;
                countA = 0;
                countB++;
            }

            else
            {
                break;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}