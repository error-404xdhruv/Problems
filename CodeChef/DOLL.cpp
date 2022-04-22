
// https://www.codechef.com/problems/DOLL
#include <iostream>

using namespace std ;

int main()
{
    int T;
    cin >> T ;
    for (int i = 0; i < T; i++)
    {
        int N, k, count = 0;
        cin >> N >> k ;
        int array[100000];
        for (int i = 0; i < N; i++)
        {
            cin >> array[i] ;
        }
        for (int i = 0; i < N; i++)
        {
            if (array[i]>k)
            {
                count++ ;
            }
        }
        cout << count << endl;
    }
    

    return 0;
}