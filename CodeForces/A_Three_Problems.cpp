#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<l> s;
    for (int i = 0; i < n; i++)
    {
        l a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() < 3)
    {
        cout << -1 << " " << -1 << " " << -1 << endl;
    }
    else
    {
        set<l>::iterator itr = s.begin();
        int count = 1;
        for (itr = s.begin(); count <= 3; itr++)
        {
            cout << *itr << " ";
            count++;
        }
    }

    return 0;
}