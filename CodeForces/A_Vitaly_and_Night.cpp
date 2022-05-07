#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    int array [200][200] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*m; j++)
        {
            cin >> array[i][j] ;
        }
    }
    int count = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*m; j=j+2)
        {
            if (array[i][j]==1 || array[i][j+1] == 1)
            {
                count++ ;
            }
        }
        
    }
    cout << count << endl ;

    return 0;
}