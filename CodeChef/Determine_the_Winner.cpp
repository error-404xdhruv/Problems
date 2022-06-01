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
        l pa, pb, qa, qb ;
        cin >> pa >> pb >> qa >> qb ;
        l maxp = max(pa, pb), maxq = max(qa, qb) ;
        if (maxp<maxq)
        {
            cout << "P" << endl ;
        }
        else if (maxq < maxp)
        {
            cout << "Q" << endl ;
        }
        else
        {
            cout << "TIE" << endl ;
        }    
    }
    
    return 0;
}