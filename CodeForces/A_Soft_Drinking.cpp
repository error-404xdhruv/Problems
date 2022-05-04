#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, k ,l , c, d , p , nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int a  = (k*l)/(n*nl) , b = (p/(n*np)) , ze = (c*d)/n ;
    
    cout << min(min(a,b), ze) ;
    
    return 0;
}