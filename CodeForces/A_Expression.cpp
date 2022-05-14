#include <bits/stdc++.h>
#define l long long
using namespace std ;

int main()
{
    int a, b, c ;
    cin >> a >> b >> c ;
    vector <l> ans ;
    ans.push_back(a+b+c) ;
    ans.push_back(a*b*c) ;
    ans.push_back((a*b)+c) ;
    ans.push_back(a+(b*c)) ;
    ans.push_back((a+b)*c) ;
    ans.push_back(a*(b+c)) ;
    ans.push_back(a+b*c) ;
    ans.push_back(a*b+c) ;

    sort(ans.begin(), ans.end()) ;
    cout << ans[ans.size()-1] << endl ;

    return 0;
}