#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n;
    int array[1000] ;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }
    int countAns =0 ;
    for (int i = 1; i < n; i++)
    {
        int count1 = 0, count2 =0;

        for (int j = 0; j < i; j++)
        {
            if (array[i]<array[j])
            {
                count1++ ;
            }
            else if (array[i]>array[j])
            {
                count2++ ;
            }
            
        }
        if(count1 == i || count2 ==i)
        {
            countAns++ ;
        }
    }
    
    cout << countAns << endl ;
    return 0;
}