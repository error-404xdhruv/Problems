#include <iostream>
using namespace std ;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int fir , sec ;
        cin >> fir >> sec ;
        if ((fir*10) == (sec*5))
        {
            cout << "ANY" << endl;
        }
        else if ((fir*10) > (sec*5))
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "SECOND"<< endl ;
        }
    }
    return 0;
}