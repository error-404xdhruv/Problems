#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n;
    cin >> n;
    vector <pair <int, int>> v(n) ;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second ;
    }
    int count =0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j!=i)&&(v[i].first == v[j].second))
            {
                count++ ;
                break ;
            }
        }
    }
    
    cout << n - count << endl ;

    return 0;
}