#include <bits/stdc++.h>
using namespace std ;

int main()
{
    long long int n , m, a;
    cin >> n >> m >> a ;
    long long int ans = ceil((double)n/a)*ceil((double)m/a) ;
    cout << ans << endl ;

    return 0;
}