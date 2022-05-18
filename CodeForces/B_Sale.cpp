#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    vector <int> arr ;
    int ai ;
    for (int i = 0; i < n; i++)
    {
        cin >> ai ;
        arr.push_back(ai) ;
    }
    sort(arr.begin(), arr.end()) ;
    int ans = 0 , count= 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            ans += arr[i] ;
            count++ ;
            if (count==m)
            {
                break ;
            }
        }
    }
    cout << -ans << endl ;

    return 0;
}