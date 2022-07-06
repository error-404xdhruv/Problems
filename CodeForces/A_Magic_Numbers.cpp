#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    string s;
    cin >> s;
    l n = s.length() ;
    bool flag = true;
    for (l i = 0; i < n; i++)
    {
        if (s[i] == '1' and s[i + 1] == '4' and s[i + 2] == '4' and i < n-2)
        {
            i += 2;
        }
        else if (s[i] == '1' and s[i+1] == '4' and i < n-1)
        {
            i += 1;
        }
        else if (s[i] == '1')
        {
            i += 0 ;
        }
        else
        {
            // cout << i << endl ;
            flag = false;
            break;
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

    return 0;
}