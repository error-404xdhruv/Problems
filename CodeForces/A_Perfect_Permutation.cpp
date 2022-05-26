#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n;
    cin>> n ;
    if ((n&1)==1)
    {
        cout << -1 << endl ;
        return 0 ;
    }
    else
    {
        cout << 2 << " " << 1 << " " ;
        for (int i = 3; i <= n; i+=2)
        {
            cout << i+1 << " " << i << " " ;
        }
        
    }
    cout << "\n" ;

    return 0;
}