#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int b ; cin >> b ;
    for (int i = 0; i < 3; i++)
    {
        int si, sf; cin >> si >> sf ;
        if (si == b)
        {
            b = sf ;
        }
        else if (sf == b)
        {
            b = si ;
        }        
    }
    cout << b << endl ;

    return 0;
}