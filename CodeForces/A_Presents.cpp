#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
    int array[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+1 == array[j])
            {
                cout << j+1 << " " ;
            }
            
        }
        
    }
    

    return 0;
}