
#include <iostream>
using namespace std ;
int finalDigit (int n)
{
    return n%10 ;
}
int main(int argc, char const *argv[])
{
    int T;
    cin >> T ;
    int start[100] , end[100] ;
    for (int i = 0; i < T; i++)
    {
        cin >> start[i] >> end[i] ;
    }
    for (int i = 0; i < T; i++)
    {
        int count = 0 ;
        for (int j = start[i]; j <= end[i]; j++)
        {
            if (finalDigit(j) == 2 || finalDigit(j) == 3 || finalDigit(j) == 9)
            {
                count++ ;
            }
        }
        cout << count << endl ;
    }
    return 0;
}