#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define v2 vector<vector<int>> 
using namespace std ;

int main()
{
    string num ;
    cin >> num ;
    l count = 0;
    while (num.length() > 1)
    {
        l sum = 0;
        for (l i = 0; i < num.length(); i++)
        {
            string tempo ;
            tempo = num[i] ;
            int temp = stoi(tempo) ;
            sum += temp ;
        }
        num = to_string(sum) ;
        count++ ;
    }
    cout << count << endl ;

    return 0;
}