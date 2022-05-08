
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int year ;
    cin >> year ;
    int a, b, c, d;
    for (int i = year+1; ; i++)
    {
        int temp = i ;
        a = temp%10;
        temp /= 10 ;
        b = temp%10;
        temp /= 10;
        c = temp%10;
        temp /= 10;
        d = temp%10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << i << endl ;
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}