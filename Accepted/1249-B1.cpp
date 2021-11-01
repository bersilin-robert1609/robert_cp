#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int j=0; j<t; j++){
        int n;
        cin>>n;
        int p[n+1];
        for(int i=1; i<n+1; i++) cin>>p[i];

        for(int i=1; i<n+1; i++){
            int temp=p[i];
            int count=1;
            while(temp!=i){
                temp=p[temp];
                count++;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }

    return 0;
}