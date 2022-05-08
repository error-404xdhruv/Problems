#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] >= 33 && p[i] <= 126)
        {
            if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') // '+' character is also given in the question but you know what it has no role in giving some output in HQ9+ lang, it is just used to increase the vakue of internal accumulator, so dont consider '+' operator in if statement.
            {
                cout << "YES" << endl;
                goto end;
            }
        }
    }
    cout << "NO" << endl;

end:
    return 0;
}