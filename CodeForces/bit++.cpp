#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n ;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string state;
        cin >> state;
        if (state=="X++"||state=="++X")
        {
            x++ ;
        }
        else if (state=="X--"||state=="--X")
        {
            x-- ;
        }
                
    }
    cout << x << endl; 

    return 0;
}