#include <bits/stdc++.h>
using namespace std ;

int countDigit(int x)
{
    int count = 0 ;
    while (x != 0)
    {
        count++ ;
        x /= 10 ;
    }
    return count ;
}
int level (int x)
{
    return x%10 ;
}
int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int x ;
        cin >> x ;
        if (countDigit(x)==1)
        {
            cout << 1 + 10*(level(x)-1) << endl;
        }
        else if (countDigit(x)==2)
        {
            cout << 3 + 10*(level(x)-1) << endl;
        }
        else if (countDigit(x)==3)
        {
            cout << 6 + 10*(level(x)-1) << endl;
        }
        else if (countDigit(x)==4)
        {
            cout << 10 + 10*(level(x)-1) << endl;
        }
    }
    

    return 0;
}