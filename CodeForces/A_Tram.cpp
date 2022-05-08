#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[1000][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
    }
    int sum[2000];
    int ans = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                ans = ans - array[i][j];
            }
            else
            {
                ans = ans + array[i][j];
            }
            sum[k] = ans;
            k++;
        }
    }
    int final = 0;
    for (int i = 0; i < k; i++)
    {
        if (final < sum[i])
        {
            final = sum[i];
        }
    }
    cout << final << endl;

    return 0;
}