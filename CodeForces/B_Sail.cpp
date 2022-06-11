#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    for (l i = 0; i < t; i++)
    {
        if (ex > sx and s[i] == 'E')
        {
            sx++;
        }
        else if (sx > ex and s[i] == 'W')
        {
            sx--;
        }

        if (sy > ey and s[i] == 'S')
        {
            sy--;
        }
        else if (ey > sy and s[i] == 'N')
        {
            sy++;
        }

        if (sx == ex && sy == ey)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}