#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

int main()
{
    int n, m;
    cin>> n >> m ;
    char arr[100][100] ;
    bool flag = true ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j] ;
            if (arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y')
            {
                flag = false ;
            }
        }
    }
    if (flag == true)
    {
        cout << "#Black&White" << endl ;
    }
    else
    {
        cout << "#Color" << endl ;
    }
    
    

    return 0;
}