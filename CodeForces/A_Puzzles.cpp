#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    vi arr ;
    int temp ;
    for (int i = 0; i < m; i++)
    {
        cin >> temp ;
        arr.push_back(temp) ;
    }
    sort(arr.begin(), arr.end(), greater<int>()) ; 
    int diff = INT_MAX ;
    for (int i = 0; i <= m-n ; i++)
    {
        diff = min(diff, arr[i]-arr[i+n-1]) ;
    }
    cout << diff << endl ;

    return 0;
}