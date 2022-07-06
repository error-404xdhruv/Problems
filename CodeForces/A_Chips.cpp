#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = (n * (n + 1)) / 2;
    int rounds_completed = m / sum;
    int left = m - (m / sum) * sum;
    int numbers[n];
    iota(numbers, numbers + n, 1);
    for (int i = 0; i < n; i++)
    {
        if (left < numbers[i])
        {
            cout << left << endl;
            break;
        }
        else
        {
            left -= numbers[i];
        }
    }

    return 0;
}