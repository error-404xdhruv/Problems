
// https://www.codechef.com/problems/ICL1902

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, ans = 0;
        cin >> N;
        while (N != 0)
        {
            int x = (int)(sqrt(N));
            N = N - pow(x, 2);
            ans ++ ;
        }
        cout << ans << endl;
    }

    return 0;
}