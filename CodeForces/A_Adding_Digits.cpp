#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l a, b, n;
    cin >> a >> b >> n;
    bool flag = false ;
    for (l j = 0; j <= 9; j++)
    {
        if ((a * 10 + j) % b == 0)
        {
            flag = true;
            a = a * 10 + j;
            break ;
        }
    }
    if (flag == false)
    {
        cout << -1 << endl ;
        return 0 ;
    }
    string s = to_string(a) ;
    for (l i = 0; i < n-1; i++)
    {
        s += '0' ;
    }
    cout << s << endl ;

    return 0;
}