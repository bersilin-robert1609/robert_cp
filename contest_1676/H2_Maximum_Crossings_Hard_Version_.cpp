#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int mergesort(vector<int> &a, int start, int end)
{
    if(start >= end) return 0;
    int mid = (start+end)/2;
    int ans1 = mergesort(a, start, mid);
    int ans2 = mergesort(a, mid+1, end);

    int i=start, j=mid+1, k=0;
    int ans = ans1 + ans2;
    vector<int> temp(end-start+1);
    while(i<=mid && j<=end)
    {
        if(a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans += (mid-i+1);
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    //cout<<ans1<<" "<<ans2<<" "<<ans<<" "<<start<<" "<<end<<endl;
    while(i<=mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for(int i=start; i<=end; i++)
    {
        a[i] = temp[i-start];
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int ans = mergesort(a, 0, n-1);
    //for(auto &i : a) cout<<i<<" ";
    //cout<<endl;
    cout<<ans<<endl;
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