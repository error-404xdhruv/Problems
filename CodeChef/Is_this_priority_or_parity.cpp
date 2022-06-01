#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n, k ;
        cin >> n >> k;
        if (k==1)
        {
            if (n%2==0)
            {
                cout << "EVEN" << endl ;
            }
            else
            {
                cout << "ODD" << endl ;
            }
        }
        else if (k==2)
        {
            cout << "ODD" << endl ;
        }
        else
        {
            cout << "EVEN" << endl ;
        }          
    }
    

    return 0;
}