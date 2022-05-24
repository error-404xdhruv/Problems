
// bahut hi behtareen question

#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    l n;
    cin >> n;
    vl v(n+1);
    for (l i = 1; i <= n; i++)
    {
        l temp;
        cin >> temp;
        v[temp] = i;
    }
    l m;
    cin >> m;
    l search;
    l countV = 0, countP = 0;
    while (m--)
    {
        cin >> search;
        countV += v[search];
        countP += n + 1 - v[search];
    }

    cout << countV << " " << countP << endl;

    return 0;
}