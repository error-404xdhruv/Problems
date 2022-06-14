#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int t ; cin >> t ;
    while (t--)
    {
        char a[8][8] ;
        int r ,c ;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j] ;
                if (a[i][j] == '#' and (a[i-1][j-1] == '#' and a[i-1][j+1]=='#'))
                {
                    r = i+1 , c = j+1 ;
                }
            }
        }
        cout << r << " " << c << endl ;        
    }
    

    return 0;
}