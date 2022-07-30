#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    map<int, int> count;
    for(int i=0; i<n; i++) count[a[i]]++;

    int curr;
    map<int, int>::iterator it = count.begin();
    for(it; it!=count.end(); it++)
        if(it->second >= k) 
        {
            curr = it->first;
            break;
        }
    
    if(it == count.end())
    {
        cout<<-1<<endl;
        return;
    }
    int l=curr, r=curr, maxDiff = 0, max_l, max_r;

    it++;
    for(it; it != count.end(); it++)
    {
        if(it->second >= k && it->first == (curr + 1)) r++;
        else{
            if(r-l+1 > maxDiff) {max_l = l; max_r = r; maxDiff = r-l+1;}

            for(it; it!=count.end(); it++)
                if(it->second >= k) 
                {
                    curr = it->first;
                    break;
                }
            l=curr, r=curr;
        }
        if(it == count.end()) break;
        curr = it->first;
    }
    if(r-l+1 > maxDiff) {max_l = l; max_r = r; maxDiff = r-l+1;}

    if(maxDiff > 0) cout<<max_l<<" "<<max_r<<endl;
    else cout<<-1<<endl;
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