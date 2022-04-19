/*
Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first n. He writes down the following sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even integers from 1 to n (also in ascending order). Help our hero to find out which number will stand at the position number k.
*/

#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <string>

using namespace std ;

int main(int argc, char const *argv[])
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