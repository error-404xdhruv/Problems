#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        if ((n & 1) == 1)
        {
            l left = round(float(n) / 3);
            l right = left - 1;
            l mid = n - (left + right);
            while (left == mid  || right == mid)
            {
                mid++;
                right--;
            }

            cout << left << " " << mid << " " << right << endl;
        }
        else
        {
            l left = ceil(float(n) / 3);
            l right = left - 1;
            l mid = n - (left + right);
            while (left == mid || right == mid)
            {
                mid++;
                right--;
            }
            cout << left << " " << mid << " " << right << endl;
        }
    }

    return 0;
}