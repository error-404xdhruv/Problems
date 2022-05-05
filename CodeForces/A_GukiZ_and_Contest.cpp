#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
    int arr[2000] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        int count =0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                count++ ;
            }
            
        }
        cout << count+1 << " " ;
    }
    

    return 0;
}