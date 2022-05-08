
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n /= 10;
    }
    // cout << count << endl;
    if (count == 0)
    {
        cout << "NO" << endl;
        goto end;
    }
    else
    {
        while (count != 0)
        {
            if (count == 4 || count == 7)
            {
                count = count / 10;
            }
            else
            {
                cout << "NO" << endl;
                goto end;
            }
        }
        cout << "YES" << endl;
    }
end:
    return 0;
}