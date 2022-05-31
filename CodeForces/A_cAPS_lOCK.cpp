#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    string s ;
    cin >>s  ;
    int countLower =0, countUpper =0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i]>= 'A' && s[i]<= 'Z')
        {
            countUpper ++ ;
        }     
    }
    if ((s[0]>='A' && s[0]<='Z')&& countUpper == s.size()-1)
    {
        string ans ;
        for (int i = 0; i < s.size(); i++)
        {
            ans += tolower(s[i]) ;
        }
        cout << ans << endl ;
    }
    else if ((s[0]>= 'a' && s[0]<='z') && countUpper == s.size()-1)
    {
        string ans ;
        ans += toupper(s[0]) ;
        for (int i = 1; i < s.size(); i++)
        {
            ans += tolower(s[i]) ;
        }
        cout << ans << endl ;
    }
    else
    {
        cout << s << endl ;
    }
    

    return 0;
}