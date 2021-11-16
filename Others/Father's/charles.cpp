#include <bits/stdc++.h>
using namespace std;

int main(){
    double alpha, beta;
    double a1, a2, a3;
    double increment;
    cin>>alpha>>beta>>a1>>a2>>a3;
    cin>>increment;

    double x3, y1, y2, y3;

    for(double x1=0; x1<=alpha; x1+=increment){
        for(double x2=0; x2<=beta; x2+=increment){
            y1=alpha-x1;
            y2=beta-x2;
            x3=1-x1-x2;
            y3=2-y1-y2;

            double k1 = a1*x1 + a2*x2 + a3*x3;
            double k2 = a1*y1 + a2*y2 + a3*y3;

            cout<<x1<<" ";
            cout<<x2<<" ";
            cout<<x3<<" ";
            cout<<y1<<" ";
            cout<<y2<<" ";
            cout<<y3<<" ";
            cout<<k1<<" ";
            cout<<k2<<" ";
            cout<<k2-k1<<endl;
        }
    }
    return 0;
}