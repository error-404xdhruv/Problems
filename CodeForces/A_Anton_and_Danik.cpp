#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l n ;
    cin >> n ;
    string s ;
    cin >> s ;
    l countA =0, countD=0 ;
    for (l i = 0; i < n; i++)
    {
        if (s[i]=='A')
        {
            countA++ ;
        }
        else
        {
            countD++ ;
        }
    }
    if (countA == countD)
    {
        cout << "Friendship" << endl ;
    }
    else if (countA < countD)
    {
        cout << "Danik" << endl ;
    }
    else
    {
        cout << "Anton" << endl ;
    }
        

    return 0;
}