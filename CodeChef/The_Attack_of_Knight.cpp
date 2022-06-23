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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        map<pair<int, int>, int> m;
        int dx[8] = {-2, -2, -1, -1, 2, 2, 1, 1};
        int dy[8] = {-1, 1, -2, 2, -1, 1, -2, 2};
        bool flag = false;
        for (int i = 0; i < 8; i++)
        {
            int xx1 = x1 + dx[i], yy1 = y1 + dy[i];
            if ((xx1 >= 1 and xx1 <= 8) and (yy1 >= 1 and yy1 <= 8))
            {
                m[{xx1, yy1}]++;
                if (m[{xx1, yy1}] > 1)
                {
                    flag = true;
                    break;
                }
            }
            int xx2 = x2 + dx[i], yy2 = y2 + dy[i];
            if ((xx2 >= 1 and xx2 <= 8) and (yy2 >= 1 and yy2 <= 8))
            {
                m[{xx2, yy2}]++;
                if (m[{xx2, yy2}] > 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}