#include <iostream>

using namespace std ;

int main()
{
    int T;
    cin >> T ;
    int array[1000] ;
    for (int i = 0; i < T; i++)
    {
        cin >> array[i] ;
    }
    for (int i = 0; i < T; i++)
    {
        cout << 2*array[i] << endl ;
    }
    

    return 0;
}