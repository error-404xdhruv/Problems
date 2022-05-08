
// https://codeforces.com/problemset/problem/1475/B
#include <iostream>
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    if (n % 2020 <= n / 2020)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        doWork();
    }
    return 0;
}