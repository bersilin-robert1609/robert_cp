#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int a, l, r;
    cin>>l>>r>>a;

    int opt1 = r/a +r%a;

    if(a == 1)
    {
        cout<<opt1<<endl;
        return;
    }

    r -= (r%a + 1);

    int opt2 = 0;
    if(r>=l) opt2 = r/a + r%a;

    cout<<max(opt1, opt2)<<endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    while(t--) solve();
    return 0;
}