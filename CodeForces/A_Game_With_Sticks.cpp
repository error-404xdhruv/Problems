#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, m ;
    cin >> n >> m ;
    int flag ; // 0 stand for akshat
    int temp = 1;
    for (int i = 0; temp != 0; i++)
    {
        if (i%2==0)
        {
            flag = 0 ;
        }
        else
        {
            flag = 1 ;
        }
        
        n -= 1;
        m -= 1;
        if (n ==0 || m==0)
        {
            temp = 0 ;
        }
        
    }
    if (flag==0)
    {
        cout << "Akshat" << endl ;
    }
    else
    {
        cout << "Malvika" << endl ;
    }
    

    return 0;
}