#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cutoff = arr[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (cutoff == 0)
        {
            if (arr[i] > 0)
            {
                count++;
            }
        }
        else
        {
            if (arr[i] >= cutoff)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}