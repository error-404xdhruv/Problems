#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}

// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++)
    {
        // Do school mathematics, compute difference of
        // current digits

        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++)
    {
        int sub = ((str1[i] - '0') - carry);

        // if the sub value is -ve, then make it positive
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        string inp;
        cin >> inp;
        string orig = inp;
        // cout << orig << endl;
        string s;
        l i;
        if (inp[0] == '9')
        {
            s += '1';
            s += '0';
            i = 2;
            for (l j = 1; j < inp.length(); j++)
            {
                s += inp[j];
            }
        }
        else
        {
            s += (int(inp[0]) + 1);
            i = 1;
            for (l j = 1; j < inp.length(); j++)
            {
                s += inp[j];
            }
        }

        // cout << s << endl ;

        // preparing the first half of the string
        for (l j = 1; j <= s.length() / 2; j++)
        {
            if (s[j] == '9')
            {
                continue;
            }
            else
            {
                s[j] = (int(s[j]) + 1);
            }
        }

        // cout << s << endl;

        // preparing the second half of the string
        l len = s.length();
        if ((len & 1) == 1)
        {
            for (l z = len / 2 + 1; z < len; z++)
            {
                s[z] = s[len - z - 1];
            }
        }
        else
        {
            for (l z = len / 2; z < len; z++)
            {
                s[z] = s[len - z - 1];
            }
        }

        // cout << s << endl;

        // now taking out the final ans
        string ans = findDiff(s, orig);
        l ind = 0;
        while (ans[ind] == '0')
        {
            ans.erase(ans.begin() + ind);
        }
        cout << ans << endl;
    }

    return 0;
}