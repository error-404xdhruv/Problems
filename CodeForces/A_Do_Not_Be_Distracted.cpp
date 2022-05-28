#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

bool ifExist (vector<char> arr, char ch)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (ch==arr[i])
        {
            return true ;
        }
    }
    return false ;
}

int main()
{
    int t ;
    cin>> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin>> s ;
        vector <char> charStore ;
        charStore.push_back(s[0]) ;
        bool flag = true ;
        for (int i = 1; i < n; i++)
        {
            if (s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                if (ifExist(charStore, s[i]))
                {
                    cout << "NO" << endl ;
                    flag = false ;
                    break ;
                }
            }
            charStore.push_back(s[i]) ;
        }
        if (flag)
        {
            cout << "YES" << endl ;
        }
        
    }
    

    return 0;
}