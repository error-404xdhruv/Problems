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
    vi v;
    for (int q = 0; q < n; q++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int max = 1, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
            if (max < count)
            {
                max = count;
            }
        }
        else
        {
            count = 1 ;
        }
        
    }
    if (max <= (n + 1) / 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}