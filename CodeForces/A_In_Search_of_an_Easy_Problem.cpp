#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int arr[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int one = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            one++ ;
        }
        
    }
    if (one==0)
    {
        cout << "EASY" << endl ;
    }
    else
    {
        cout << "HARD" << endl ;
    }
    
    
    return 0;
}