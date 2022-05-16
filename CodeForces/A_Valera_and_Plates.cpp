#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    int n, m, k ;
    cin >> n >> m >> k ; 
    int arr[1000] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int countB =m , countP =k, countW =0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            if (countB==0)
            {
                countW++ ;
                countB++ ;
            }
            countB-- ;
        }
        if (arr[i]==2)
        {
            if (countP==countB && countP==0)
            {
                countW++ ;
                countP++ ;
                countP-- ;
            }
            // agar no.of plates zero nhi hain to hme plates hi use krne hain...
            else if (countP!=0)
            {
                countP-- ;
            }
            else
            {
                countB-- ;
            }
            
        }        
    }
    cout << countW << endl ;

    return 0;
}