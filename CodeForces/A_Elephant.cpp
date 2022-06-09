
// similar to indian coin problem solved during greedy algorithms
#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l p ;
    cin >> p ;
    vi v = {5, 4, 3, 2, 1} ;
    l count =0 ;
    for (int i = 0; i < v.size() && p > 0; i++)
    {
        count += p/v[i] ;
        p -= (p/v[i]) * v[i] ;
    }
    cout << count << endl ;

    return 0;
}