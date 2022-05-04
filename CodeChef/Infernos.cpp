#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        int array[200];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        // time taken by multi mode
        int time2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] > time2)
            {
                time2 = array[i];
            }
        }

        // time taken by single mode
        int time1 = 0;
        for (int i = 0; i < n; i++)
        {

            if (array[i] <= x)
            {
                time1 += 1;
            }
            else if (array[i] % x == 0)
            {
                time1 += array[i] / x;
            }
            else
            {
                time1 += array[i] / x + 1;
            }
        }

        cout << min(time1, time2) << endl;
    }

    return 0;
}