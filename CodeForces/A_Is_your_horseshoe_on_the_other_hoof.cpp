#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int array[4] ;
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i] ;
    }
    int count = 0 ;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (array[i]==-1)
            {
                continue;
            }
            else
            {
                if (array[i]==array[j])
            {
                count++ ;
                array[j] = -1 ;
            }
            }
            
            
        }
        
    }
    
    cout << count << endl ;
    return 0;
}