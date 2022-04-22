#include <iostream>
using namespace std;
int main()
{
    int N, X, T;
    cin >> T;
    for (int i=0; i < T; i++)
    {
        cin >> N >> X;
        if (N > X)
        {
            cout << "no" << endl;
        }

        else if (N <= X)
        {
            if (X % N == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "no" << endl;
        }
    }
}