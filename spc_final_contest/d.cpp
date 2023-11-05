#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int cover = 0;
    int ans = 0;
    int flag = 0;

    for(int i=0; i<n; i++)
    {
        if(i == 0 && str[i] == 'B')
        {
            cout<<-1<<endl;
            return;
        }
        if(i > cover) flag = 0;
        if(str[i] == 'R') cover = max(cover, i+a[i]);
        else if(str[i] == 'B')
        {
            if(i <= cover)
            {
                if(flag == 0) 
                {
                    ans++;
                    flag = 1;
                }
                else
                {
                    cover = max(cover, i+a[i]);
                }
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        //cout<<cover<<" "<<i<<endl;
    }
    cout<<ans<<endl;
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