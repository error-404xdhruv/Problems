#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    l t ;
    cin >> t ;
    while (t--)
    {
        l n ;
        cin >> n ;
        l count = floor(log10(n)+1) ;
        vl storeNum ;
        while (n>0)
        {
            storeNum.push_back(n%10) ;
            n /= 10 ;
        }
        reverse(storeNum.begin(), storeNum.end()) ;
        if (count==2)
        {
            swap(storeNum[0], storeNum[1]) ;
            cout << storeNum[0] << endl ;
        }
        else
        {
        sort(storeNum.begin(), storeNum.end()) ;
        cout << storeNum[0]  << endl ;
        }
    }

    return 0;
}