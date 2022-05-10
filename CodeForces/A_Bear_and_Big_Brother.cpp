#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int a, b ;
    cin >> a >> b ;
    int newA=a, newB= b ;
    int count = 0;
    for (int i = 0; newA<=newB; i++)
    {
        count++ ;
        newA = newA*3 ;
        newB = newB*2 ;
    }
    cout << count << endl ;

    return 0;
}