#include <bits/stdc++.h>
using namespace std ;

int doCount (int n)
{
    int countDigits =0, countAns =0;
    int temp = n;
    int array[50] ;
    int i =0 ;
    while (temp!=0)
    {
        countDigits++ ;
        array[i]=temp%10 ;
        temp /= 10 ;
        i++ ;
    }
    for (int i = 0; i < countDigits; i++)
    {
        if (array[i]==array[i+1])
        {
            countAns++ ;
        }
        
    }
    if (countDigits==countAns)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
    
    
}

int main()
{
    int t;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (doCount(j)==1)
            {
                count++ ;
            }
        }
        cout << count << endl ;
        
    }
    return 0;
}