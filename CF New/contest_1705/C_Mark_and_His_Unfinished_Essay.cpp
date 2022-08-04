#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, c, q;
    cin>>n>>c>>q;
    string str;
    cin>>str;
    vector<pair<int, int>> copies;
    vector<pair<int, int>> indices;
    vector<int> count;
    int curr = n;
    for(int i=0; i<c; i++)
    {
        int l, r;
        cin>>l>>r;
        curr++;
        copies.push_back(make_pair(l, r));
        indices.push_back(make_pair(curr, curr + r-l));
        curr += r-l;        
        count.push_back(r-l+1);
    }

    for(int i=0; i<c; i++)
    {
        cout<<indices[i].first<<" "<<indices[i].second<<endl;
    }

    for(int i=0; i<q; i++)
    {
        int k; cin>>k;
    
        while(k > n)
        {
            cout<<k<<endl;
            int sum = n;
            int j = 0;
            for(j=0; j<c; j++)
            {
                if(sum + count[j] > k) break;
                sum += count[j];
            }
            k = k - indices[j].first + copies[j].first;
            cout<<k<<endl;
        }
        cout<<str[k-1]<<endl;
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