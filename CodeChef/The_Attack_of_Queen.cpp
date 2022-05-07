
/*
#include <bits/stdc++.h>
using namespace std ;

int doCount (int n, int x, int y)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == x || j == y)
            {
                count++ ;
            }
            else if (abs(x-i)==abs(y-j))
            {
                count++ ;
            }   
        }
    }
    return count ;
}

int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y ;
        int ans = doCount(n, x, y) ;
        cout << ans-1 << endl ; 
        // ans-1 bcz of the line given in the question
        // The cell on which the Queen is present, is not said to be under attack by the Queen.
    }

    return 0;
}
*/

// was getting TLE in prev method

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int n, x, y, count, v1, v2, v3, v4 ;
        cin >> n >> x >> y;
        count = 2*(n-1) ;
        v1 = min(x-1, y-1) ;
        v3 = min(x-1, n-y) ;
        v2 = min(n-x, y-1) ;
        v4 = min(n-x, n-y) ;
        count += v1+v2+v3+v4 ;
        cout << count << endl ;
    }

    return 0;
}