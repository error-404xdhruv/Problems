#include <iostream>
using namespace std ;

int main()
{
    int T, N, X, P;
    cin >> T ;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> X >> P ;
        if (X*3+(-1)*(N-X)>=P)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }        
    }
    return 0;
}