#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<pair<pair<int, int>, int>> list(n);
    for(int i=0; i<n; i++) {
        cin>>list[i].first.first;
        list[i].first.second = i;
    }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    sort(list.begin(), list.end());


        int curr = list[0].first.first;
        list[0].second = 1;
        int colorCnt = 2;

        int arr[k+1] = {0};

        for(int i=1; i<n; i++){

            if(curr == list[i].first.first){
                if(colorCnt>k){
                    list[i].second = 0;
                    arr[0]++;
                    continue;
                }else{
                    list[i].second = colorCnt;
                    arr[colorCnt]++;
                    colorCnt++;
                    continue;
                }
            }else{

                curr = list[i].first.first;
                if(colorCnt<=k){
                    list[i].second = colorCnt;
                    arr[colorCnt]++;
                    colorCnt++;
                    if(colorCnt>k){
                        colorCnt = 1;
                    }
                    continue;
                }else{
                    colorCnt = 1;
                    list[i].second = colorCnt;
                    arr[colorCnt]++;
                    colorCnt++;
                    continue;
                }
            }

        }

        for(int i=0; i<n; i++) cout<<list[i].second<<" ";
        cout<<'\n';
        int j = arr[1];
        int i = 1;
        while(arr[i]==j && i<=k) i++;

        if(i == k) return;
        else{

            if(i==1) list[0].second = 0;
            else{
                for(int l=1; l<i; l++){
                    for(int a=0; a<n; a++){
                        if(list[i].second == l){
                            list[i].second =0;
                            break;
                        }
                    }
                }
            }
        }

        for(int b=0; b<n; b++){
            int temp = list[b].first.first;
            list[b].first.first = list[b].first.second;
            list[b].first.second = temp;
        }
    

    sort(list.begin(), list.end());

    for(int i=0; i<n; i++) cout<<list[i].second<<" ";

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