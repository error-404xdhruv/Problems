
// using Sieve of Eratosthenes

#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l n;
    cin >> n;
    bool prime[n];
    memset(prime, true, sizeof(prime));
    for (l i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            for (l j = i * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (l i = 2; i <= n / 2; i++)
    {
        if (prime[i])
        {
            if (prime[n - i])
            {
                cout << i << " " << n - i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}