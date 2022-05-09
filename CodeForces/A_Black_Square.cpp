#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int a1, a2, a3, a4 ;
    cin >> a1 >> a2 >> a3 >> a4 ;
    string s ;
    cin >> s ;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            count += a1 ;
        }
        if (s[i]=='2')
        {
            count += a2 ;
        }
        if (s[i]=='3')
        {
            count += a3 ;
        }
        if (s[i]=='4')
        {
            count += a4 ;
        }
        
    }
    
    cout << count << endl ;
    return 0;
}