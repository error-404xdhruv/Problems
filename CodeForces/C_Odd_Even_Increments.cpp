#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int t ;
    cin>> t ;
    while (t--)
    {
        int n;
        cin>>n ;
        vi v ;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>> a;
            v.push_back(a) ;
        }
        bool flag = true ;
        for (int i = 0; i < n; i+=2)
        {
            if (v[i]%2 != v[0]%2)
            {
                flag = false ;
            }
        }
        if (flag == false )
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i < n; i+=2)
            {
                if (v[i]%2!= v[1]%2)
                {
                    flag = false ;
                }
            }
            if (flag == false)
            {
                cout << "NO" << endl ;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl ;
        }
    }
    
    return 0;
}