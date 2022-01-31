#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int findcomdiv(int a, int b){
    int i = a;
    if(a>b) i = b;
    int ans = 1;

    for(int it = i; it>1; it--){
        if(a%it==0 && b%it==0) {
            ans = it;
            break;
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    int min = MOD;
    for(auto &i : a) {
        cin >> i;
        if(i<min) min = i;
    }

    stack<int> s;

    for(int i = 0; i < n; i++){  
        int diff = a[i]-min;
        if(diff == 0) continue;
        else s.push(diff);
    }

    if(!s.empty()){
        int ans = s.top();
        s.pop();

        while(!s.empty()){
            ans = findcomdiv(ans, s.top());
            s.pop();
        }

        cout<<ans<<endl;
        return;
    }

    cout<<-1<<endl;
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