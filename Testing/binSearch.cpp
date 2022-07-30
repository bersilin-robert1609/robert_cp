#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int32_t binSearchGorE(vector<int> a, int x)
{
    if(x <= a[0]) return 0;
    if(x > a[a.size()-1]) return -2;
    int start = 1, end = a.size()-2;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(start == end) return mid;
        if(x >= a[mid] && x < a[mid+1]) return mid + 1;
        else if(x < a[mid] && x >= a[mid-1]) return mid;
        else if(x < a[mid-1]) end = mid - 1;
        else if(x > a[mid + 1]) start = mid + 1;
    }
    return -2;
}

int32_t main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int x;
    cin>>x;

    cout<<binSearchGorE(a, x) + 1<<endl;
    return 0;
}