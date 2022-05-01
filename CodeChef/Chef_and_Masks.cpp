#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int X , Y ;
        cin >> X >> Y ;
        if (100*X < 10*Y)
        {
            cout << "Disposable" << endl ;
        }
        else
        {
            cout << "Cloth" << endl ;
        }
        
    }
    

    return 0;
}