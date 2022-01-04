#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{

    string n;
    cin>>n;
    int k;
    cin>>k;

    if(k==1){
        for(int i=0; i<n.length(); i++){
            cout<<n[0];
        }
    }else{

        int j=1;

        int no1 = n[0]-'0';

        while(n[j]==n[0]) j++;

        int no2 = n[j]-'0';

        k=j+1;

        while(n[k]==n[j]) k++;

        int no3 = n[k]-'0';

        if(no2>no1){
            if(no3>no2){
                for(int i=0; i<j; i++) cout<<n[0];
                cout<<n[j]-'0'+1;
                for(int i=j+1; i<n.length(); i++) cout<<n[0];
            }else{
                for(int i=0; i<j; i++) cout<<n[0];
                for(int i=j; i<n.length(); i++) cout<<n[j];
            }
        }else{
            if(no3<no2){
                for(int i=0; i<j; i++) cout<<n[0];
                for(int i=j; i<n.length(); i++) cout<<n[j];
            }else{
                if(no3<no1){
                    for(int i=0; i<j; i++) cout<<n[0];
                    for(int i=j; i<k; i++) cout<<n[j];
                    for(int i=k; i<n.length(); i++) cout<<n[0];
                }else{
                    for(int i=0; i<j; i++) cout<<n[0];
                    for(int i=j; i<n.length(); i++) cout<<n[j]-'0'+1;
                }
            }
        }

    }
    cout<<endl;

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