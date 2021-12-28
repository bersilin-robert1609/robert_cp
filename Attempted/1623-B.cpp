#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;

    int flags=n;

    vector<pair<pair<int, int>, int>> lrd(n+1);
    for(int i=1; i<n+1; i++){
        cin>>lrd[i].first.first>>lrd[i].first.second;
        lrd[i].second = 0;

        if(lrd[i].first.first == lrd[i].first.second){
            lrd[i].second = lrd[i].first.first; 
            flags--;
        }
    }


    while(flags>0){
        //cout<<flags<<endl;
        int fl=flags;

        for(int i=1; i<n+1; i++){

            if(lrd[i].second==0){
                
                int f=0;
                int start =lrd[i].first.first;
                int end = lrd[i].first.second;

                int ele = end-start+1;
                int arr[end-start+1]= {0};

                //cout<<start<<" "<<end<<endl;

                for(int j=1; j<n+1; j++){
                    if(lrd[j].second >=start && lrd[j].second<=end){
                        f++;
                        arr[lrd[j].second-start] = 1;
                        if(f==ele-1) break;
                    }
                }

                //cout<<f<<endl;
                
                if(f==ele-1){
                    for(int j=0; j<end-start+1; j++){
                        if(arr[j]==0){
                            lrd[i].second = j+start;
                            break;
                        }
                    }
                    flags--;
                }
            }

        }

        assert(fl>flags);

        //cout<<flags<<endl;
    }

    for(int i=1; i<n+1; i++){
        cout<<lrd[i].first.first<<" "<<lrd[i].first.second<<" "<<lrd[i].second<<endl;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}