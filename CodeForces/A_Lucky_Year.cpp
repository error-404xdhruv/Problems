#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
using namespace std;

int main()
{
    l n;
    cin >> n;
    l count = floor(log10(n) + 1);
    l temp = pow(10, count - 1);
    l ans = temp - n % temp;
    cout << ans << endl;

    return 0;
}