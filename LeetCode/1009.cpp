
// complement of base 10 integer

#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <string>

using namespace std ;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    int num = x;
    int rem = 0;
    int count = 0;
    while (num != 0)
    {
        rem = rem + (num%2)*pow(10,count) ;
        num/= 2;
        count++ ;
    }

    int n = rem;
    int digit = 0, newNum = 0;
    while (n!=0)
    {
        digit = n%10;
        if (digit == 1)
        {
            digit = 0;
        }
        else if (digit == 0)
        {
            digit = 1;
        }
        newNum = newNum*10 + digit ;
        n/=10;
    }

    int y = newNum;
    int count1 = 0, sum1 = 0;
    while (y!=0)
    {
        sum1 += (y%10)*pow(2,count1);
        y/=10;
        count1++ ;
    }
    cout << sum1 << endl ;


    return 0;
}