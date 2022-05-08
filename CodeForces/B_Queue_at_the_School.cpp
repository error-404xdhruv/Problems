#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q;
    int n, t;
    cin >> n >> t;
    cin >> q;
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (q[i] == 'B' && q[i + 1] == 'G')
            {
                swap(q[i], q[i + 1]);
                i++;
            }
        }
    }
    cout << q << endl;

    return 0;
}