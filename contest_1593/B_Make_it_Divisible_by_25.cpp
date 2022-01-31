#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    int flag0 = 0, flag5 = 0;

    int cnt = 0;

    while(n>0){

        if(n%10 == 0){
            if(flag0 == 1){
                cout<<cnt+flag5<<endl;
                return;
            }else{
                flag0 = 1;
            }
        }else if(n%10 == 5){
            if(flag0 == 1){
                cout<<cnt+flag5<<endl;
                return;
            }
            else{
                if(flag5 == 1) cnt++;
                else flag5 = 1;
            }
        }else if(n%10 == 2 || n%10 == 7){
            if(flag5 == 1){
                cout<<cnt+flag0<<endl;
                return;
            }else{
                cnt++;
            }
        }else{
            cnt++;
        }

        n/=10;
    }

    cout<<cnt+flag0+flag5<<endl;
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