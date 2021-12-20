#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
#include <stack>
#include <string>
using namespace std;

#define int long long int

void solve()
{
    string a, s;
    cin>>a>>s;

    int alen = a.length();
    int slen = s.length();
    stack<int> S;

    int i=alen-1, j=slen-1;

    while(i>-1 && j>-1){

        int n1 = s[j]-'0';
        int n2 = a[i]-'0';
        int rem=n1-n2;

        if(rem>=0){
            i--;
            j--;
            S.push(rem);
            continue;
        }else if(s[j-1]=='1'){
            n1 = 10 + (s[j]-'0');
            n2 = a[i]-'0';

            rem = n1-n2;
            S.push(rem);
            i--;
            j-=2;
            continue;
        }else{
            cout<<-1<<endl;
            return;
        }
       
    }
    if(i==-1 && j>-1){
        while(j>-1){
            S.push(s[j]-'0');
            j--;
        }
    }
    
    if(i==-1 && j==-1){
        while(S.top()==0) S.pop();
        while(!S.empty()){
            cout<<S.top();
            S.pop();
        }cout<<endl;
    }else{
        cout<<-1<<endl;
        return;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}