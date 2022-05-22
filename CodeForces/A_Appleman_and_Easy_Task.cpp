#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> v;

    for (int i = 0; i < n; i++)
    {
        vector<char> a;
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            a.push_back(ch);
        }
        v.push_back(a);
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int count = 0;
            if (i - 1 >= 0 && v[i - 1][j] == 'o')
            {
                count++;
            }
            if (j + 1 < n && v[i][j + 1] == 'o')
            {
                count++;
            }
            if (i + 1 < n && v[i + 1][j] == 'o')
            {
                count++;
            }
            if (j - 1 >= 0 && v[i][j - 1] == 'o')
            {
                count++;
            }
            if ((count & 1) == 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}