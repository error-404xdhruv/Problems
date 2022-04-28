#include <bits/stdc++.h>
#include <cstring>
#include <cctype>

using namespace std ;

int main()
{
    string word ;
    cin >> word ;
    int countU= 0, countL=0 ;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            countU++ ;
        }
        else
        {
            countL++ ;
        }
    }
    if (countU >countL)
    {
        
        for (int i = 0; i < word.size(); i++)
        {
            char ch ;
            ch = toupper(word[i]) ;
            cout << ch ;
        }
    }
    else
    {
        for (int i = 0; i< word.size(); i++)
        {
            char ch ;
            ch = tolower(word[i]) ;
            cout << ch ;            
        }
        
    }
    cout << endl ;
    return 0;
}