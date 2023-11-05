#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int

const int MOD = 1e9+7;

void solve(int i)
{
    int n;
    cin >> n;

    int sumNx = 0, sumNy = 0, sumQx = 0, sumQy = 0;
    int sumsquareNx = 0, sumsquareNy = 0, sumsquareQx = 0, sumsquareQy = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        (sumNx += x) %= MOD;
        (sumNy += y) %= MOD;
        (sumsquareNx += x*x) %= MOD;
        (sumsquareNy += y*y) %= MOD;
    }

    int q;
    cin>>q;
    for(int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        (sumQx += x) %= MOD;
        (sumQy += y) %= MOD;
        (sumsquareQx += x*x) %= MOD;
        (sumsquareQy += y*y) %= MOD;
    }

    int ans = 0;
    (ans += n*(sumsquareQx)) %= MOD;
    (ans += n*(sumsquareQy)) %= MOD;
    (ans -= 2*(sumQx*sumNx)) %= MOD;
    (ans -= 2*(sumQy*sumNy)) %= MOD;
    (ans += q*(sumsquareNx)) %= MOD;
    (ans += q*(sumsquareNy)) %= MOD;

    cout << "Case #" << i << ": " << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen ("main_input.txt", "r", stdin);
    freopen ("main2_output.txt", "w", stdout);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}