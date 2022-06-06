#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        v.push_back(ai);
    }
    int sumC = 0, sumBi = 0, sumBa = 0;
    for (int i = 0; i < n; i += 3)
    {
        sumC += v[i];
    }
    for (int i = 1; i < n; i += 3)
    {
        sumBi += v[i];
    }
    for (int i = 2; i < n; i += 3)
    {
        sumBa += v[i];
    }
    if (sumC > sumBi && sumC > sumBa)
    {
        cout << "chest" << endl;
    }
    else if (sumBi > sumC && sumBi > sumBa)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}