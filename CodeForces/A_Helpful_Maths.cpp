#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string inp ;
    cin >> inp ;
    char arr[1000] ;
    int count =  0;
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i]=='+')
        {
            continue;
        }
        else
        {
            arr[count]=inp[i] ;
            count++ ;
        }
    }
    sort(arr, arr+count) ;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] ;
        if (i==count-1)
        {
            break ;
        }
        cout << '+' ;
    }
    
    cout << endl ;
    return 0;
}