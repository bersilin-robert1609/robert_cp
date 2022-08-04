#include <bits/stdc++.h>
using namespace std;

int main(){
    float n = 1024;
    for(int i=9; i>0; i--)
    {
        n = (n*pow(2, i))/(n+pow(2, i));
    }
    cout<<n<<endl;
    cout<<"Hello"<<endl;
}