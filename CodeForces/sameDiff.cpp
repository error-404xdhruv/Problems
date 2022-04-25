
// this code giving TLE at test 4
// ques has tags hashing, so hashmaps would be used

// https://codeforces.com/problemset/problem/1520/D
#include <bits/stdc++.h>
using namespace std ;
void doWork (int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[j]-array[i]==j-i)
            {
                count++;
            }
        }
    }
    cout << count << endl ;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n ;
        cin >> n ;
        int array[200000] ;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i] ;
        }
        doWork(array, n) ;
    }
    
    return 0;
}