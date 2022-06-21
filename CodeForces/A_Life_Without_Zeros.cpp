
// stoi function is used to convert string to int

#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    l a, b;
    cin >> a >> b;
    l c = a + b;
    string a1 = to_string(a);
    string b1 = to_string(b);
    string c1 = to_string(c);

    for (l i = 0; i < a1.length(); i++)
    {
        if (a1[i] == '0')
        {
            a1.erase(a1.begin() + i);
            i-- ;
        }
    }
    for (l i = 0; i < b1.length(); i++)
    {
        if (b1[i] == '0')
        {
            b1.erase(b1.begin() + i);
            i-- ;
        }
    }
    for (l i = 0; i < c1.length(); i++)
    {
        if (c1[i] == '0')
        {
            c1.erase(c1.begin() + i);
            i-- ;
        }
    }
    if (stoi(c1) == stoi(a1) + stoi(b1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}