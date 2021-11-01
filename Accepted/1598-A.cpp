#include <iostream>
#include <string>
#include <cmath>
// #include <queue>
// #include <stack>

using namespace std;

int checkpath(int init1, int init2, int fin1, int fin2, int grid[2][100]){
    if(grid[init1][init2]==1 || init2>fin2) return 0;
    if(init1==fin1 && init2==fin2) return 1;

    grid[init1][init2]=1;

    int check1=checkpath(init1+pow((-1),init1), init2, fin1, fin2, grid);
    int check2=checkpath(init1, init2+1, fin1, fin2, grid);
    int check3=checkpath(init1+pow((-1),init1), init2+1, fin1, fin2, grid);

    return (check1||check2||check3);
}

int main() {
    int k;
    cin>>k;

    for(int i=0; i<k; i++){
        int n;
        cin>>n;
        string row1, row2;
        cin>>row1>>row2;

        int grid[2][100];
        for(int j=0;j<n; j++){
            grid[0][j]=row1[j]-48;
            grid[1][j]=row2[j]-48;
        }

        int check=checkpath(0,0,1,n-1,grid);

        if(check==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
