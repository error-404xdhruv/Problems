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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] ;
    }

    // this STL function is used to sort an array in decreasing order
    sort(arr, arr+n, greater<int>()) ;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] ;
        if (ans>sum/2)
        {
            cout << i+1 << endl;
            break ;
        }
    }

    return 0;
}