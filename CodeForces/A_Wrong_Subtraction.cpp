#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l n, k;
    cin >> n >> k ;
    for (int i = 0; i < k; i++)
    {
        if (n%10==0)
        {
            n /= 10 ;
        }
        else
        {
            n -= 1 ;
        }       
    }
    cout << n << endl ;

    return 0;
}