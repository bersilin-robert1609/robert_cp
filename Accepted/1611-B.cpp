#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int a, b;
    cin>>a>>b;

    int minNumber = (a > b) ? b : a;
    int pairsPossible = (a+b)/4;

    int answer = (pairsPossible > minNumber) ? minNumber : pairsPossible;

    cout<<answer<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}