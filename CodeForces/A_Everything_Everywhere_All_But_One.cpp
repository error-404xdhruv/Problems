
// logic is that if any of the element is equal to the AM of the rest of the element then cout YES else NO

#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        vi v ;
        l sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a ;
            v.push_back(a) ;
            sum += a ;
        }
        bool flag = true ;
        for (int i = 0; i < n; i++)
        {
            if (sum-v[i] == v[i]*(n-1))
            {
                cout << "YES" << endl ;
                flag = false ;         
                break ;       
            }
        }
        if (flag)
        {
            cout << "NO" << endl ;
        }
        
    }
    

    return 0;
}