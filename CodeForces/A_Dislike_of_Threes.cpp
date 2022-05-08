#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int k ;
        cin >> k ;
        int sum = 0;
        for (int j = 1; j <= k; j++)
        {
            if (j%3==0 || j%10==3)
            {
                k += 1 ;
                continue ;
            }
            else
            {
                sum = j ;
            }
            
        }
        cout << sum << endl ;
    }
    

    return 0;
}