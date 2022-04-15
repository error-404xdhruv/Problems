#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std ;


int getSum(int n)
{
        int sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
}

int main(int argc, char const *argv[])
{
    int testCases ;
    cin >> testCases ;

    int array [testCases] ;
    for (int i = 0; i < testCases; i++)
    {
        cin >> array [i] ;
    }

    for (int i = 0; i < testCases; i++)
    {
        int flag = 0;
        for (int j = 8; j <= array[i]; j++)
        {
            if (getSum(j) > getSum(j+1))
            {
                flag ++ ;
            }
            
        }
        cout << flag << endl ;
    }

    return 0;
}
