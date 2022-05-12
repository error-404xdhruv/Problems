#include <bits/stdc++.h>
using namespace std ;

int doCalc (int arr[][200], int n , int m, int x, int y)
{
    int sum =0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(x-i)==abs(y-j))
            {
                sum += arr[i][j] ;
            }
            
        }
    }
    return sum ;
}

int main()
{
    int t; 
    cin >> t ;
    while (t--)
    {
        int n , m ;
        cin >> n >> m ;
        int arr[200][200] ;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j] ;
            }
        }
        int ans = INT_MIN ;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int newNum = doCalc(arr, n, m, i, j) ;
                ans = max(ans, newNum) ;
            }
            
        }
        cout << ans << endl ;
    }
    
    return 0;
}