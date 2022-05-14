#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        l a;
        vector<l> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }

        l count = 0;
        bool flag = false;
        for (int i = n-2; i >=0; i--)
        {
            if (arr[i+1] == 0)
            {
                flag = true;
                break;
            }
            while (arr[i] >= arr[i + 1])
            {
                count++;
                arr[i] /= 2;
            }
        }
        if (flag == true)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}