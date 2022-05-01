#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string s1, s2 ;
    getline(cin, s1) ;
    getline(cin, s2) ;

    int ans = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]>=65 && s1[i]<=90)
        {
            s1[i] = s1[i]+32 ;
        }
        
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i]>=65 && s2[i]<=90)
        {
            s2[i] = s2[i]+32 ;
        }
        
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]==s2[i])
        {
            ans = 0;
        }
        else if (s1[i]>s2[i])
        {
            ans = 1 ;
            break ;
        }
        else
        {
            ans = -1 ;
            break ;
        }
        
    }
    
    cout << ans ;

    return 0;
}