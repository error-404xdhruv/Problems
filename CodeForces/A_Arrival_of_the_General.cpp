#include <bits/stdc++.h>
using namespace std ;

int linearS_max(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==k)
        {
            return i ;
        }
    }
    return -1 ;
}
int linearS_min(int arr[], int n, int k)
{
    for (int i = n-1; i > 0; i--)
    {
        if (arr[i]==k)
        {
            return i ;
        }
    }
    return -1 ;
}

int main()
{
    int n;
    cin >> n ;
    int arr[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int mx=INT_MIN, mn=INT_MAX ;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]) ;
        mn = min(mn, arr[i]) ;
    }
    int maxInd = linearS_max(arr, n, mx) ;
    int count =  0;
    for (int i = maxInd; i > 0; i--)
    {
        swap(arr[i], arr[i-1]) ;
        count++ ;
    }

    int minInd = linearS_min(arr, n, mn) ;
    int count1 = 0;
    for (int i = minInd; i < n-1; i++)
    {
        swap(arr[i], arr[i+1]) ;
        count1++ ;
    }
    
    cout << count+count1 << endl ;

    return 0;
}