#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int t;
    cin>> t ;
    while (t--)
    {
        l n;
        cin >> n;
        vl v;
        for (l i = 0; i < n; i++)
        {
            l a;
            cin >> a ;
            v.push_back(a) ;
        }
        l countEven =0, countOdd =0;
        for (l i = 0; i < n; i++)
        {
            if ((v[i]&1)==1)
            {
                countOdd++ ;
            }
            else
            {
                countEven++ ;
            }
        }
        cout << min(countOdd, countEven) << endl ;
    }
    

    return 0;
}