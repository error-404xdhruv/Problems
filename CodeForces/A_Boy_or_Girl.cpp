#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string un ;
    cin >> un ;

    int count = un.length() ;
    int rep = 0;
    for (int i = 0; i < un.length(); i++)
    {
        if (un[i]=='1')
            {
                continue;
            }
        for (int j = i+1; j < un.length(); j++)
        {
                if (un[i]==un[j])
            {
                rep++ ;
                un[j] = '1' ;
            }           
            
        }
        
    }
    if ((count-rep)%2==0)
    {
        cout << "CHAT WITH HER!" << endl ;
    }
    else
    {
        cout << "IGNORE HIM!" << endl ;
    }
    return 0;
}