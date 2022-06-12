#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int n;
    cin >>n ;
    set <int> s ;
    for (int i = 0; i < n; i++)
    {
        int x ; cin >> x ;
        s.insert(x) ;
    }
    s.erase(*s.begin()) ;
    if (s.size() > 0)
    {
        cout << *s.begin() << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    

    return 0;
}