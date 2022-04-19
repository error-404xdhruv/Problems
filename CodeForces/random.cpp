#include <iostream>
using namespace std ;
int main()
{
    int n, p;
    cin >> n >> p ;
    int array[n] ;
    if (n%2==0)
    {
        for (int i = 1, j =1; i <= n/2; i++, j=j+2)
        {
            array[i] = j ;
        }
        for (int i = (n/2)+1, j =2; i <= n; i++, j = j+2)
        {
            array[i] = j ;
        }       
    }
    else if (n%2!=0)
    {
        for (int i = 1, j =1; i <= (n/2) + 1; i++, j=j+2)
        {
            array[i] = j ;
        }
        for (int i = (n/2)+2, j =2; i <= n; i++, j=j+2)
        {
            array[i] = j ;
        }       
    }
    cout << array[p] << endl ;
    return 0;
}