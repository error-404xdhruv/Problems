#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n;
    cin >> n ;
    int arr[100] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    vl ans ;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < arr[i]; j++)
        {
            int m ;
            cin >> m ;
            sum += m*5 ;
        }
        ans.push_back(sum + arr[i]*15) ;
    }
    cout << *min_element(ans.begin(), ans.end()) << endl ;

    return 0;
}