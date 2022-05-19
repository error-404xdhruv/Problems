#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    int count = n ;
    int day ;
    for (int i = 1; count > 0; i++)
    {
        count-- ;
        if (i%m==0)
        {
            count++ ;
        }
        day = i ;
    }
    cout << day << endl ;

    return 0;
}