#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;
int start;

bool checkCircularPermuation(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    start = 0;
    while(a[start] != b[0]) start++;
    
    for(int i = 0; i < n; i++)
    {
        if(a[(start + i) % n] != b[i]) return false;
    }
    return true;
}

void solve(int i)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    bool check = checkCircularPermuation(a, b);

    cout << "Case #" << i << ": ";
    if(check)
    {
        if(k%n == start) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout<<"NO"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("val_input.txt", "r", stdin);
    freopen("val_output.txt", "w", stdout);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++) solve(i);
    return 0;
}