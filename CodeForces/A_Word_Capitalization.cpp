#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string word;
    cin >> word ;
    if (word[0] > 96 && word[0] < 123) 
    {
        word[0] = word[0]-32 ;
    }
    cout << word << endl;

    return 0;
}