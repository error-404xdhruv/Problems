#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l t;
    cin >> t ;
    while (t--)
    {
        l n;
        int k;
        cin >> n >> k ;
        if (n%2==0)
        {
            cout << "YES" << endl ;
        }
        else
        {
            if ((k&1)==1)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }            
        }        
    }

    return 0;
}