#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

int main()
{
    IOS;
    int n;
    cin >> n;
    string num;
    cin >> num;
    vi vf, vs;
    for (int i = 0; i < n; i++)
    {
        int temp;
        temp = (int)num[i];
        vf.push_back(temp);
    }
    for (int i = n; i < num.length(); i++)
    {
        int temp;
        temp = (int)num[i];
        vs.push_back(temp);
    }
    sort(vf.begin(), vf.end());
    sort(vs.begin(), vs.end());
    int count1(0), count2(0);
    for (int i = 0; i < n; i++)
    {
        if (vf[i] < vs[i])
        {
            count1++;
        }
        else if (vf[i] > vs[i])
        {
            count2++;
        }
    }
    if (count1 == n or count2 == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}