#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9+7, INF = 1e18+10;

void solve()
{
    int n, a, b, k;
    cin>>n>>a>>b>>k;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int array[n];

    for(int i=0; i<n; i++){
        if(arr[i]%(a+b)<=a && arr[i]%(a+b)>0){
            array[i] = 0;
        }else{

            int spc;
            if(arr[i]%(a+b)==0){
                spc = ((b%a == 0) ? b/a : b/a+1);
                array[i]=spc;
                continue;
            }

            spc = (arr[i]%(a+b))/a;
            if((arr[i]%(a+b))%a == 0) spc--;
            array[i] = spc;
        }
    }

    //for(int i = 0; i<n; i++) cout<<array[i]<<" ";
    //cout<<endl;

    sort(array, array+n);

    int extra = 0;
    int sum=0;

    for(int i=0; i<n; i++){
        sum+=array[i];
        if(sum>k) break;
        extra++;
    }

    cout<<extra<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}