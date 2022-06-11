#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    map<string, int> count;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (count[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << count[s] << endl;
        }
        count[s]++;
    }

    return 0;
}