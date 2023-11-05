#include <iostream>

using namespace std;

int main()
{
    int a = 11;
    a = 7;
    if(true)
    {
        int a = 3;
        cout << a << endl;
    }
    cout << a << endl;
}