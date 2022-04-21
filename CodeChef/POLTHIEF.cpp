#include <iostream>
#include <cstdio>
using namespace std ;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n ;
    int police[1000], thief[1000];
    
    for (int i = 0; i < n; i++)
    {
        cin >> police[i] >> thief[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        if (police[i]>thief[i])
        {
            cout << police[i] - thief[i] << endl;
        }
        else
        {
            cout << thief[i] - police[i] << endl;
        }
    }
    
    return 0;
}