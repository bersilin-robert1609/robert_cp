#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    map<int, int> count;
    for(int i=0; i<n; i++) count[arr[i]]++;

    int odd = 0, even = 0;

    for(auto it = count.begin(); it != count.end(); it++)
    {
        if(it->second % 2 == 0) even++;
        else odd++;
    }

    int ans = odd;
    if(even % 2 == 1) ans += even - 1;
    else ans += even;

    cout << ans << endl;
}