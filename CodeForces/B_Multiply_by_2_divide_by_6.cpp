#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        l n;
        cin >> n;
        l count = 0;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                count++;
            }
            else
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << count << endl;
        }
    }

    return 0;
}