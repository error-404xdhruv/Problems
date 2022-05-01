#include <bits/stdc++.h>
using namespace std ;

int main()
{
    long t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        long long a, b;
        cin >> a >> b ;
        if (b==1)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
            cout << a <<" "<< (a*b) << " " << (a*b)+a << endl ;
        }
    }  
    return 0;
}