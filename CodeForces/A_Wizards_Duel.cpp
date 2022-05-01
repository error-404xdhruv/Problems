#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int l ,p, q ;
    cin >> l >> p >> q ;
    float t = l/(float)(p+q) ;
    float ans = p*t ;
    cout << ans << endl; 
    return 0;
}