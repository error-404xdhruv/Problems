#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        string s;
        cin >> s;
        l count = 1;
        l mid = n / 2, i = mid - 1;
        while (s[i] == s[mid])
        {
            count++;
            i--;
        }
        i = mid + 1;
        while (s[i] == s[mid])
        {
            count++;
            i++;
        }
        cout << count << endl;
    }

    return 0;
}