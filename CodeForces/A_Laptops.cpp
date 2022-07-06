#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    int n ; cin >> n ;
    for (int i = 0; i < n; i++)
    {
        int a, b ; cin >> a >> b ;
        if (a != b)
        {
            cout << "Happy Alex" << endl ;
            return  0 ;
        }
        
    }
    cout << "Poor Alex" << endl ;

    return 0;
}