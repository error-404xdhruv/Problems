#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; m < i; i++)
    {
        m = m - i ;
    }
    cout << m << endl;

    return 0;
}