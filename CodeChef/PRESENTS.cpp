#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << n << endl ;
        }
        else
        {
            cout << ((n/5)-n) << endl ;
        }      
    }
    return 0;
}