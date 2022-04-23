#include <iostream>
using namespace std ;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int amount ;
        cin >> amount ;
        if (amount*(0.1) > 100)
        {
            cout << amount*(0.1) << endl;
        }
        else
        {
            cout << "100" << endl ;
        }
    }
    return 0;
}