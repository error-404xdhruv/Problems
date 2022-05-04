#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str.length() < 7)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        int count = 1; // count =1 bcz if we keep count=0 then we would not get correct ans in the case of 1111111 or 0000000, bcz we would then exclude the first 1 or 0 in the respective cases
        
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == str[i - 1])
            {
                count++;
                if (count >= 7)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            else
            {
                count = 1;
            }
        }
    }
    cout << "NO" << endl ;
    return 0;
}