#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    int maxi = INT_MIN, count = 0;
    for (int i = 0; i < n * 2; i++)
    {
        int x;
        cin >> x;
        if (s.count(x) == 1)
        {
            count--;
        }
        else
        {
            s.insert(x);
            count++;
        }
        maxi = max(maxi, count);
    }
    cout << maxi << endl;

    return 0;
}