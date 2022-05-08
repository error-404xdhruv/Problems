#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int array[100][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> array[i][j];
        }
    }
    int sum = 0;
    for (int j = 1; j <= 3; j++)
    {
        for (int i = 0; i < t; i++)
        {
            sum = sum + array[i][j];
        }
        if (sum != 0)
        {
            cout << "NO" << endl;
            goto end;
        }
    }
    cout << "YES" << endl;

end:
    return 0;
}