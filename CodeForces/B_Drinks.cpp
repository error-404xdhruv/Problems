#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }
    float ans =0 ;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (float)(array[i])/n ;
    }
    printf("%0.12f\n", ans) ;

    return 0;
}