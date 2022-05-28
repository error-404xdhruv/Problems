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
        cin >> n ;
        l count =0, temp ;
        for (int i = 1; i <= 9; i++)
        {
            temp = i ;
            while (temp <= n)
            {
                count++ ;
                temp = temp*10 + i ;
            }
        }
        cout << count << endl; 
    }
    

    return 0;
}