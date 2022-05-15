#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    char string[100];
    cin.getline(string, sizeof(string) / sizeof(string[0]), '\n');
    bool isVowel = true;
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
            if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'Y' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'y')
            {
                isVowel = true;
            }
            else
            {
                isVowel = false;
            }
        }

        i++;
    }
    cout << (isVowel ? "YES" : "NO") << endl;

    return 0;
}