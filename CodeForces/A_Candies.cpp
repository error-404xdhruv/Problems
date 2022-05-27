#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    if (n%m==0)
    {
        for (int i = 0; i < m; i++)
        {
            cout << n/m << " " ;
        }
        cout << "\n" ;
    }
    else
    {
        while (n%m>0)
        {
            cout << n/m << " " ;
            n -= n/m ;
            m-- ;
        }
        for (int i = 0; i < m; i++)
        {
            cout << n/m << " " ;
        }
        
        
    }
    
    return 0;
}