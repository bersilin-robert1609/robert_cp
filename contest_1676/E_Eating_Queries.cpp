#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int32_t binSearchGorE(vector<int> &a, int x)
{
    int z = -1;
    for(int i=20; i>=0; i--)
    {
        if(z + (1<<i) >= a.size()) continue;

        if(a[z + (1<<i)] < x) z += (1<<i);
    }
    if(z+1 < a.size()) return (z+2);
    else return -1;
}

void solve()
{
    int n, q;
    cin>>n>>q;

    vector<int> a(n);
    int totSum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        totSum += a[i];
    }
    sort(a.rbegin(), a.rend());

    vector<int> sums(n);
    int tempSum = 0;
    for(int i=0; i<n; i++)
    {
        tempSum += a[i];
        sums[i] = tempSum;
    }

    while(q--)
    {
        int val; cin>>val;
        cout<<binSearchGorE(sums, val)<<endl;
    }
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