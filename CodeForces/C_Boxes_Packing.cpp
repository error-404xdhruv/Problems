#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    map <l , int> m;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        l x ; cin >> x ;
        m[x]++ ;
        maxi = max(maxi, m[x]) ;
    }
    cout << maxi << endl ;

    return 0;
}