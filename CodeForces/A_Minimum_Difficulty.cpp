#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    vector <int> arr1 ;
    int getint ;
    for (int i = 0; i < n; i++)
    {
        cin >> getint ;
        arr1.push_back(getint) ;
    }
    vector <int> final_arr ;
    for (int i = 1; i < n-1; i++)
    {
        int a = arr1[i] ;
        arr1[i] = INT_MAX ;
        int diff = INT_MIN ;

        for (int j = 0; j < n-1; j++)
        {
            if (arr1[j]==INT_MAX)
            {
                continue;
            }
            else if (arr1[j+1]==INT_MAX)
            {
                diff = max(diff, abs(arr1[j+2]-arr1[j])) ;
            }
            else
            {
                diff = max(diff, abs(arr1[j+1]-arr1[j])) ;
            }
        }
        arr1[i] = a ;
        final_arr.push_back(diff) ;
    }
    sort(final_arr.begin(), final_arr.end()) ;
    cout << final_arr[0] << endl ;

    return 0;
}