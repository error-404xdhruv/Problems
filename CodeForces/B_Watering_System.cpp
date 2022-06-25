#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vi v(n);
    l sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    l num = v[0] * a;
    l ans = round(num / sum);
    int count = 0;
    sort(v.begin() + 1, v.end());
    while (ans < b)
    {
        sum -= v.back();
        v.pop_back();
        ans = round(num / sum);
        count++;
    }
    cout << count << endl;

    return 0;
}