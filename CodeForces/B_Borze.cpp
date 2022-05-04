#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string code ;
    cin >> code ;
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i]=='-'&&code[i+1]=='.')
        {
            cout << "1" ;
            i++ ;
        }
        else if (code[i]=='-'&&code[i+1]=='-')
        {
            cout << "2" ;
            i++ ;
        }
        else
        {
            cout << "0" ;
        }
        
    }
    
    cout << endl ;
    return 0;
}