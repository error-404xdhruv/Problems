#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int p ;
        cin >> p;
        if (p<=1399)
        {
            cout << "Division 4" << endl;
        }
        else if (p>=1400 && p<=1599)
        {
            cout << "Division 3" << endl ;
        }
        else if (p>=1600 && p<=1899)
        {
            cout << "Division 2" << endl ;
        }
        else if (p>=1900)
        {
            cout << "Division 1" << endl ;
        }
        
    }
    

    return 0;
}