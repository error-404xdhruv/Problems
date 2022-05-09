#include <bits/stdc++.h>
using namespace std ;

int main()
{
    long int t ;
    cin >> t ;
    for (long int i = 0; i < t; i++)
    {
        string s ;
        cin >> s ;
        int count= 0 ;
        int temp = 1;
        int n= s.size() ;
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='B')
            {
                if (count==0)
                {
                    temp = 0;
                    break;
                }
                else
                {
                    count-- ;
                }
            }
            else
            {
                count++ ;
            }            
        }
        if (temp==1 && s[n-1]=='B' && n>1)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
    }

    return 0;
}