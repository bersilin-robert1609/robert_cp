#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    vector<int> letters(str.length());

    for(int i=0; i<str.length(); i++){
        letters[i] = str[i]-'a';
    }

    sort(letters.begin(), letters.end());

    for(int i=0; i<str.length(); i++){
        char temp = letters[i]+'a';
        cout<<temp;
    }cout<<endl;
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