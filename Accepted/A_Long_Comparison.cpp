#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int x1, p1, x2, p2;
    cin>>x1>>p1>>x2>>p2;

    int dx1=0, dx2=0;
    int tx1=x1, tx2=x2;

    while(tx1>0){
        dx1++;
        tx1/=10;
    }
    while(tx2>0){
        dx2++;
        tx2/=10;
    }
    //cout<<dx1<<" "<<dx2<<endl;

    if((p1+dx1)>(p2+dx2)){
        cout<<">"<<endl;
        return;
    }else if((p1+dx1)<(p2+dx2)){
        cout<<"<"<<endl;
        return;
    }else{

        if(dx1>dx2) x2*=pow(10, (dx1-dx2));
        else x1*=pow(10, (dx2-dx1));

        //cout<<x1<<" "<<x2<<endl;

        if(x1==x2){
            cout<<"="<<endl;
            return;
        }else if(x1>x2){
            cout<<">"<<endl;
            return;
        }else{
            cout<<"<"<<endl;
            return;
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