#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[100], arr1[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[i] = arr[i] ;
        }
        sort(arr1, arr1+n) ;
        int k ;
        for (int i = 0; i < n; i++)
        {
           if (i==0)
           {
               if (arr1[i]!=arr1[i+1])
               {
                   k = arr1[i] ;
                   goto here ;
               }
           }
           if (i==n-1)
           {
               if (arr1[i]!=arr1[i-1])
               {
                   k = arr1[i] ;
                   goto here ;
               }
               
           }
           else if (arr1[i]!=arr1[i+1] && arr1[i]!= arr1[i-1])
           {
               k = arr1[i] ;
               goto here ;
           }
        }
        here :
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==k)
            {
                cout << i+1 << endl ;
                break ;
            }
            
        }
        
    }

    return 0;
}