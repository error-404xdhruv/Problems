#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        long long int n, x, ans;
        cin >> n ;
        x = n*50 ;
        ans = (x)-(x*0.2)-(x*0.2)-(x*0.3) ;
        cout << ans << endl ;
    }
    return 0;
}