#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
using namespace std;

string doCorrect(char dir, string inp)
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string correct;
    for (int i = 0; i < inp.length(); i++)
    {
        int temp = s.find(inp[i]);

        if (dir == 'R')
        {
            correct += s[temp - 1];
        }
        else
        {
            correct += s[temp + 1];
        }
    }
    return correct ;
}

int main()
{
    char dir;
    string inp;
    cin >> dir;
    cin >> inp;

    cout << doCorrect(dir, inp) << endl;
    return 0;
}