#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    int fp=n;
    int temp=5;
    while(fp-temp>=0){
        fp=fp-temp;
        temp*=2;
    }
    temp/=5;
    if(fp%temp==0){
        switch(fp/temp){
            case 1: cout<<"Sheldon"<<endl; break;
            case 2: cout<<"Leonard"<<endl; break;
            case 3: cout<<"Penny"<<endl; break;
            case 4: cout<<"Rajesh"<<endl; break;
            case 0: cout<<"Howard"<<endl; break;
        }
    }else{
        switch(fp/temp){
            case 0: cout<<"Sheldon"<<endl; break;
            case 1: cout<<"Leonard"<<endl; break;
            case 2: cout<<"Penny"<<endl; break;
            case 3: cout<<"Rajesh"<<endl; break;
            case 4: cout<<"Howard"<<endl; break;
        }
    }
    

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; t=1;
    while(t--) solve();
    return 0;
}