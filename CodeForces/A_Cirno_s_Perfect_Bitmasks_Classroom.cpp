#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

bool isPowerOfTwo(l n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

bool isPowerOfTen(l n)
{
    return (ceil(log10(n)) == floor(log10(n)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;

        // case 1: if n is odd
        // we know that (odd & 1)==1 so we used this and (num ^ num) == 0
        if ((n & 1) == 1)
        {
            if (n == 1)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            // case 2: for even numbers
            if (n == 2)
            {
                cout << 3 << endl;
            }
            else if (isPowerOfTwo(n))
            {
                cout << n + 1 << endl;
            }
            else if (isPowerOfTen(n))
            {
                l x = log10(n);
                cout << pow(2, x) << endl;
            }
            else
            {
                int temp = 0, count = 0;
                while (temp==0)
                {
                    temp = n & 1;
                    count++;

                    // rights-shift by 1 means divided by 2
                    n = n >> 1 ;
                }

                // 1 left-shift n = pow(2, n) ;
                cout << (1 << (count-1)) << "\n";            
            }
        }
    }

    return 0;
}