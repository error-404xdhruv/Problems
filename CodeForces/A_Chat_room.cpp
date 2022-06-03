#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int posH = s.find('h'), posE = s.find('e', posH + 1), posL1 = s.find('l', posE + 1), posL2 = s.find('l', posL1 + 1), posO = s.find('o', posL2 + 1);

    if (posH == string::npos || posE == string::npos || posL1 == string::npos || posL2 == string::npos || posO == string::npos)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}