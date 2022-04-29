#include <bits/stdc++.h>
using namespace std ;

bool isPrime (int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            count++ ;
        }
    }
    if ((count==0 && n!=1) || n==2 || n==3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int n, m;
    cin >> n >> m ;
    if (isPrime(m)==0)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = n+1; i < m; i++)
        {
            if (isPrime(i))
            {
                cout << "NO" << endl;
                goto end;
            }
        }
        cout << "YES" << endl ;
    }
    
    end:
    return 0;
}