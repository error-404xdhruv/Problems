#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

    return 0;
}