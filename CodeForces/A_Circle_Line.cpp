#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        int way1 =0;
        int lower = min(a,b) ;
        int upper = max(a,b) ;
        for (int i = lower-1; i < upper-1; i++)
        {
            way1+= arr[i] ;
        }
        int way2 = 0 ;
        for (int i = upper-1; i < n; i++)
        {
            way2+=arr[i] ;
        }
        for (int i = 0; i < lower-1; i++)
        {
            way2+= arr[i] ;
        }
        cout << min(way1, way2) << endl ;
        
    }

    return 0;
}