#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std ;

int main(int argc, char const *argv[])
{
    int n ;
    cin >> n ;
    int array[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> array [i] ;
    }
    
    for (auto x : array)
    {
        int sum = 0 ;
        int sum2 = 0 ;
        int interestingNum = 0 ;
        for (int i = 1; i < x; i++)
        {
            int next = i+1 ;
            
            for (int j = i; j/10 != 0 ;)
            {
                sum = sum + (j % 10) ;
                j /= 10 ;
            }
            
            for (int k = (i+1); k/10 != 0 ;)
            {
                sum = sum + (k % 10) ;
                k /= 10 ;
            }
        }
        if (sum > sum2)
        {
            interestingNum ++ ;
        }
        cout << interestingNum << endl ;       
        
    }
    

    return 0;
}