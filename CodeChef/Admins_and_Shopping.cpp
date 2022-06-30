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
        // n is no.of shops and x is no.of admins
        l n, x;
        cin >> n >> x;
        vl v(n);
        for (l i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        l mini = *min_element(v.begin(), v.end());

        // bcz ceil function does not round up integers, we have to use typecasting to double
        l temp = (int)ceil((double)x / mini);

        // final ans cant be smaller than n, and it is also affected by the minimum element so this.......
        cout << max(n, temp) << endl;
    }

    return 0;
}