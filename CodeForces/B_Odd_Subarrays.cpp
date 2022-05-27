#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l t;
    cin>> t ;
    while (t--)
    {
        l n;
        cin>> n ;
        vl v ;
        for (l i = 0; i < n; i++)
        {
            l a;
            cin >>a;
            v.push_back(a) ;
        }
        
        // main code begins here
        l count= 0 ;
        for (l i = 0; i < n-1; i++)
        {
            if (v[i]>v[i+1])
            {
                count++ ;
                i++;
            }
        }
        cout << count << endl ;
    }
    
    return 0;
}