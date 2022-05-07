#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n , s ;
    cin >> n >> s ;
    int array[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }
    sort(array, array+n) ;
    int sum = 0 ;
    for (int i = 0; i < n-1; i++)
    {
        sum += array[i] ;
    }
    if (sum <= s)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    
    return 0;
}