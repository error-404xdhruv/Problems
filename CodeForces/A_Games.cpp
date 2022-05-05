#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n ;

    int array[30][2] ;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i][0] >> array[i][1] ;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][0]==array[j][1])
            {
                count++ ;
            }
        }
    }
    
    cout << count << endl ;
    return 0;
}