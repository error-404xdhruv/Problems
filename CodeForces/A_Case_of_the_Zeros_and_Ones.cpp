#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    l n;
    cin >> n;
    string s ;
    cin >> s ;
    int count1 =0, count0 =0;
    for (l i = 0; i < s.length(); i++)
    {
        if (s[i]=='1')
        {
            count1++ ;
        }
        else
        {
            count0++ ;
        }
        
    }
    cout << abs(count1-count0) << endl ;

    return 0;
}