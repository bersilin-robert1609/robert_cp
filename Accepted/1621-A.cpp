#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    if(n%2==0){
        if(k>(n/2)){
            cout<<-1<<endl;
            return;
        }else{
            int r=0;
            for(int i=1; i<=k; i++){

                for(int j=1; j<=n; j++){
                    if(j==2*i-1) cout<<'R';
                    else cout<<'.';
                }
                cout<<endl;

                r++;
                for(int j=1; j<=n; j++){
                    cout<<'.';
                }
                cout<<endl;
                
                r++;
            }

            for(int i=r+1; i<=n; i++){
                for(int j=1; j<=n; j++){
                        cout<<'.';
                }
                cout<<endl;
            }
        }
    }else{
        if(k>(n+1)/2){
            cout<<-1<<endl;
            return;
        }else{
            int r=0;
            for(int i=1; i<=k; i++){

                for(int j=1; j<=n; j++){
                    if(j==2*i-1) cout<<'R';
                    else cout<<'.';
                }
                cout<<endl;
                r++;

                if(r==n) return;
                for(int j=1; j<=n; j++){
                    cout<<'.';
                }
                cout<<endl;
                
                r++;
            }

            for(int i=r+1; i<=n; i++){
                for(int j=1; j<=n; j++){
                        cout<<'.';
                }
                cout<<endl;
            }
        }
    }
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