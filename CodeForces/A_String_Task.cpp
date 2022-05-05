#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string input ;
    cin >> input ;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i]=='A' || input[i]=='E' || input[i]=='I' || input[i]=='O' || input[i]=='U' || input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='Y' || input[i]=='y')
        {
            continue;
        }
        else if (input[i]>64 && input[i]<91)
        {
            cout << '.' << (char)(input[i]+32) ;
        }
        else
        {
            cout << '.' << input[i] ;
        }
                
    }
    

    return 0;
}