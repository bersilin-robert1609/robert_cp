#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int m, s;
    cin>>m>>s;
    int sum = s;

    if(m == 1 && s<=9)
    {
        cout<<s<<" "<<s<<endl;
        return;
    }

    if(s<1 || s>9*m)
    {
        cout<<-1<<" "<<-1<<endl;
        return;
    }

    if(s == 1)
    {
        cout<<1;
        for(int i=1; i<m; i++) cout<<0;
    }
    bool flag = false;
    if(s > 1)
    {
        if(s/9 + 1 < m) 
        {
            cout<<1;
            s-=1;
            flag = true;
        }
        int nines = s/9;
        int rem = s%9;
        int zeroes = m - (s/9 + 2);
        for(int i=0; i<zeroes; i++) cout<<0;
        if(flag || rem!=0) cout<<rem;
        for(int i=0; i<nines; i++) cout<<9;
    }
    cout<<" ";

    s = sum;
    for(int i=0; i<m; i++)
    {
        if(s>=9)
        {
            cout<<9;
            s -= 9;
        }
        else if(s>=0)
        {
            cout<<s;
            s -= s;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}