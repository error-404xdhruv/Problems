#include <bits/stdc++.h>
#include <strings.h>
using namespace std ;

int main()
{
    string line1 , line2 , line3 ;
    getline (cin , line1) ;
    getline (cin , line2) ;
    getline (cin , line3) ;
    int count1 =0 , count2=0 , count3=0 ;
    for (int i = 0; i < line1.size(); i++)
    {
        if (line1[i]=='a' || line1[i]=='e' || line1[i]=='i' || line1[i]=='o' || line1[i]=='u')
        {
            count1++ ;
        }
        
    }
    for (int i = 0; i < line2.size(); i++)
    {
        if (line2[i]=='a' || line2[i]=='e' || line2[i]=='i' || line2[i]=='o' || line2[i]=='u')
        {
            count2++ ;
        }
        
    }
    for (int i = 0; i < line3.size(); i++)
    {
        if (line3[i]=='a' || line3[i]=='e' || line3[i]=='i' || line3[i]=='o' || line3[i]=='u')
        {
            count3++ ;
        }
        
    }
    if (count1==5 && count2==7 && count3==5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    

    return 0;
}