#include <bits/stdc++.h>
using namespace std;

int doCount(int key)
{
    int count = 0;
    while (key != 0)
    {
        if (key % 10 == 4 || key % 10 == 7)
        {
            count++;
        }
        key /= 10;
    }

    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = n;
    for (int i = 0; i < n; i++)
    {
        if (doCount(arr[i]) > k)
        {
            count--;
        }
    }
    cout << count << endl;

    return 0;
}