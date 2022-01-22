#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string s, t;
    cin>>s>>t;

    int str[s.length()];

    int a=0, b=0, c=0;

    for(int i=0; i<s.length(); i++){
        str[i] = s[i]-'a';
        if(s[i]=='b') b++;
        else if(s[i]=='c') c++;
        else if(s[i]=='a') a++;
    }
    sort(str, str+s.length());

    if(t != "abc" || a==0 || b==0 || c==0){
        for(int i=0; i<s.length(); i++){
            char ch = str[i] + 'a';
            cout<<ch;
        }
        cout<<endl;
        return;
    }

    int i=0;
    for(i=0; (char)(str[i]+'a')!='b'; i++){
            char ch = str[i] + 'a';
            cout<<ch;
    }

    while(c--) {
        cout<<'c';
        i++;
    }
    while(b--) {
        cout<<'b';
        i++;
    }

    for(i; i<s.length(); i++){
        char ch = str[i] + 'a';
        cout<<ch;
    }
    cout<<endl;
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