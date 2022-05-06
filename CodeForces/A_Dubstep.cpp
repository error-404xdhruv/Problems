#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string in;
    cin >> in ;
    int temp = 1;
    for (int i = 0; i < in.length(); i++)
    {
        if (in[i]=='W'&&in[i+1]=='U'&&in[i+2]=='B')
        {
            i+=2 ;
            if (temp==0)
            {
                cout << " " ;
            }
            temp = 1 ;
            continue;
        }
        else
        {
            cout << in[i] ;
            temp =0 ;
        }
    }

    return 0;
}