#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

string solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    
    if(k*2 < n) return "NO";

    map<int, int> count;
    int max_count = 0;
    for(int i=0; i<n; i++)
    {
        count[a[i]]++;
        if(max_count < count[a[i]]) max_count = count[a[i]];

        if(max_count > 2) return "NO";
        //cout<<max_count<<endl;
    }

    return "YES";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen ("second_hands_input.txt", "r", stdin);
    freopen ("output.txt","w",stdout);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case #"<<i<<": "<<solve()<<"\n";
    } 
    //fclose(stdin); fclose(stdout);
    return 0;
}