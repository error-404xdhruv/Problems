#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int windows[10000][2]  ;
    int n;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> windows[i][0] >> windows[i][1] ;
    }
    int left0=0, left1=0, right0=0,right1=0 ;
    for (int i = 0, j =0; i < n; i++)
    {
        if (windows[i][j]==0)
        {
            left0++ ;
        }
        else
        {
            left1++ ;
        }
    }
    for (int i = 0, j =1; i < n; i++)
    {
        if (windows[i][j]==0)
        {
            right0++ ;
        }
        else
        {
            right1++ ;
        }
    }
    int ans = 0 ;
    if (left0<left1)
    {
        ans += left0 ;
    }
    else
    {
        ans += left1 ;
    }

    if (right0<right1)
    {
        ans = ans+right0 ;
    }
    else
    {
        ans = ans+right1 ;
    }
    

    cout << ans << endl ;

    return 0;
}