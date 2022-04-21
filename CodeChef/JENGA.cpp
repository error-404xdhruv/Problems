#include <iostream>
#include <cstdio>
using namespace std ;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int array1[10000] , array2[10000] ;
    for (int i = 0; i < T; i++)
    {
        cin >> array1[i] >> array2[i] ;
    }
    for (int i = 0; i < T; i++)
    {
        if (array1[i]>array2[i])
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
        }
    }
    
    return 0;
}