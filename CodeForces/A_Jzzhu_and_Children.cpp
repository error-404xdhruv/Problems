#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n, m ;
    cin >> n>> m ;
    int index, temp(0) ;
    for (int i = 1; i <= n; i++)
    {
        double a;
        cin >> a ;
        if (ceil(a/m)>=temp)
        {
            index = i;
            temp = ceil(a/m) ;
        }
        
    }
    cout << index << endl ;

    return 0;
}