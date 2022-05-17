#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    string teams[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i] ;
    }
    string ans ;
    int count1 =0 ;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (teams[i]==teams[j])
            {
                count++ ;
            }
        }
        if (count>count1)
        {
            ans = teams[i] ;
        }
        count1 = count ;
    }
    cout << ans << endl ;

    return 0;
}