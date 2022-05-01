#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, k;
    cin >> n >> k;
    int p[100][2] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> p[i][j] ;
        }
        
    }
    double dis = 0;
    for (int i = 1; i < n; i++)
    {
        dis = dis + sqrt(pow((p[i][0]-p[i-1][0]), 2) + pow((p[i][1]-p[i-1][1]), 2)) ;   
    }
    printf("%0.9lf\n", (dis*k)/50) ;

    return 0;
}