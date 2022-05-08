#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int a, b ;
    cin >> a >> b ;
    int winA=0, winB=0, draw=0 ;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a-i)<abs(b-i))
        {
            winA++ ;
        }
        if (abs(a-i)==abs(b-i))
        {
            draw++ ;
        }
        if (abs(a-i)>abs(b-i))
        {
            winB++ ;
        }
        
    }
    cout << winA << " " << draw << " " << winB << endl ;

    return 0;
}