#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[100000];
    long long count = 1, temp = 1;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i] >= arr[i - 1])
            {
                temp++;
                count = max(count, temp);
            }
            else
            {
                temp = 1;
            }
        }
    }
    cout << count << endl;

    return 0;
}