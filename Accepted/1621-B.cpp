#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n; cin>>n;

    int minl, maxr, lrlong, cl, cr, clong; 
    cin>>minl>>maxr>>cl;
    cr = clong = cl;
    lrlong = maxr - minl;

    cout<<cl<<endl;

    for(int i=1; i<n; i++){
        int l, r, c;
        cin>>l>>r>>c;

        if(l<=minl) {
            if(l==minl){
                if(c<cl){
                    minl = l;
                    cl = c;
                }
            }else{
                minl = l;
                cl = c;
            }
        }

        if(r>=maxr) {
            if(r==maxr){
                if(c<cr){
                    maxr = r;
                    cr = c;
                }
            }else{
                maxr = r;
                cr = c;
            }
        }

        if(lrlong<=r-l){
            if(r-l == lrlong){
                if(c<clong){
                    lrlong = r-l;
                    clong = c;
                }
            }else{
                lrlong = r-l;
                clong = c;
            }
        }

        if(lrlong == maxr-minl){
            cout<<min(clong, cr+cl)<<endl;
        }else{
            cout<<cr+cl<<endl;
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