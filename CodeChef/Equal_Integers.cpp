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
        l x, y ;
        cin>> x >> y ;
        l count=0 ;
        if (x==y)
        {
            cout << 0 << endl ;
        }
        else if (x <y)
        {
            cout << y-x << endl ;
        }
        else
        {
            if ((x-y)%2==0)
            {
                cout << (x-y)/2 << endl ;
            }
            else
            {
                cout << ((x-y)+1)/2 + 1 << endl ;
            }
        }
    }
    

    return 0;
}