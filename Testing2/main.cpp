#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

class A
{
    public:
        int data;
        char x;
};

bool operator<(const A& a, const A& b)
{
    if(a.data == b.data)
    {
        return a.x < b.x;
    }
    return a.data < b.data;
}

ostream& operator<<(ostream &os, const A& a)
{
    os << a.data << " " << a.x << endl;
    return os;
}


bool comp(const A& a, const A& b)
{
    if(a.data == b.data)
    {
        return a.x < b.x;
    }
    return a.data < b.data;
}

bool newcomp(const int& a, const int& b)
{
    return a > b;
}

void solve()
{
    int n;
    cin>>n;
    A a[n];
    for(int i = 0; i < n; i++) cin>>a[i].data>>a[i].x;
    // sort(a.begin(), a.end());
    sort(a, a+n, comp);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
        // cout<<a[i].data<<" "<<a[i].x<<endl;
    }
    cout<<n<<endl;
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