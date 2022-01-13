#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{   
    int n;
    cin>>n;
    string str;
    cin>>str;

    stack<char> st;
    int i=0;
    int ans=0;
    while(i<n){
        if(str[i]=='(') st.push('(');
        else{
            if(st.empty()){
                ans++;
            }else st.pop();
        }
        i++;
    }

    int temp = 0;
    if(!st.empty()){
        while(!st.empty()){
            temp++;
            st.pop();
        }
    }
    if(ans<temp) ans=temp;
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