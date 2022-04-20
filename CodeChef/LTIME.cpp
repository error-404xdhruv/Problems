#include <iostream>
using namespace std ;
int main()
{
    int array[12] ;
    int T , X;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> array[i] ;
    }
    for (int i = 0; i < T; i++)
    {
        if (array[i]>=1&&array[i]<=4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }   
    }
    return 0;
}