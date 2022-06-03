#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == ' ')
        {
            continue;
        }
        else
        {
            // read about string::npos from gfg
            if (s1.find(s2[i]) != string::npos)
            {
                s1[s1.find(s2[i])] = '#' ;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl ;
    return 0;
}