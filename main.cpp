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

    queue<int> Q;
    Q.push(1); Q.push(2); Q.push(3); Q.push(4); Q.push(5);
    int count=1;
    int fp=Q.front();

    while(count!=n){
        Q.pop();
        Q.push(fp);
        Q.push(fp);
        fp=Q.front();
        count++;
    }

    switch(fp){
        case 1: cout<<"Sheldon"<<endl; break;
        case 2: cout<<"Leonard"<<endl; break;
        case 3: cout<<"Penny"<<endl; break;
        case 4: cout<<"Rajesh"<<endl; break;
        case 5: cout<<"Howard"<<endl; break;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; t=1;
    while(t--) solve();
    return 0;
}