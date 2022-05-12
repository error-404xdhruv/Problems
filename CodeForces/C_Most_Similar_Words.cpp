#include <bits/stdc++.h>
using namespace std;

int Ans(char arr[][8], int n, int m)
{
    int finalAns = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        for (int k = i + 1; k < n; k++)
        {
            int ans = 0;
            for (int j = 0; j < m; j++)
            {
                ans += abs(arr[i][j] - arr[k][j]);
            }
            finalAns = min(finalAns, ans);
        }
    }
    return finalAns;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // using 2-D arrays
        char word[50][8];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> word[i][j];
            }
        }
        int final = Ans(word, n, m);
        cout << final << endl;
    }

    return 0;
}