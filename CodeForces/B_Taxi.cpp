#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    l n ;
    cin >> n ;
    vi group ;
    int temp ;
    for (int i = 0; i < n; i++)
    {
        cin >> temp ;
        group.push_back(temp) ;
    }
    sort(group.begin(), group.end()) ;
    l count = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (group[i]==4)
        {
            count++ ;
        }
        if (group[i]==3)
        {
            count++ ;
        }
        if (group[i]==2)
        {
            int count2 = 0 ;
            for (l j = i+1; j < n; j++)
            {
                if (group[j]==2)
                {
                    count2++ ;
                    count++ ;
                    group[j]= INT_MAX ;
                    break ;
                }
                else
                {
                    break ;
                }
            }
            if (count2==0)
            {
                count++ ;
            }
        }
        if (group[i]==1)
        {
            int seatsLeft = 3 ;
            for (l k = n-1; k > i; k--)
            {
                if (group[k]<= seatsLeft)
                {
                    seatsLeft -= group[k] ;
                    group[k] = INT_MAX ;
                }
                if (seatsLeft == 0)
                {
                    break ;
                }
                
            }
            count++ ;
        }
    }
    cout << count << endl ;

    return 0;
}