#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string guest , host , wrong;
    getline(cin, guest) ;
    getline(cin, host) ;
    getline(cin, wrong) ;
    string final = guest+host ;
    
    // now we have to store all the characters of the strings wrong and final in two diff arrays and sort them. After that we would compare the two arrays and if they are equal print YES else NO.

    sort(wrong.begin(), wrong.end()) ;
    sort(final.begin(), final.end()) ;

    if (wrong==final)
    {
        cout << "YES" << endl ;
    }
    else 
    {
        cout << "NO" << endl ;
    }

    return 0;
}