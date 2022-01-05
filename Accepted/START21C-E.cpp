#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

int primeFactors(int n) { 
    // Print the number of 2s that divide n 

    int nums=0;

    if (n % 2 == 0) 
    { 
        nums++; 
        while(n%2==0) n = n/2; 
    } 

    // n must be odd at this point. So we can skip 
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        // While i divides n, print i and divide n 

        if(n%i==0) nums++;
        while (n % i == 0) 
        { 
            n = n/i; 
        } 
    } 

    // This condition is to handle the case when n 
    // is a prime number greater than 2 
    if (n > 2) {
        nums++;
    }

    return nums;
}

void solve()
{
    int n, m;   
    cin>>n>>m;

    if(m==1){
        cout<<0<<endl;
        return;
    }

    int primes = primeFactors(m);

    if(primes==1){
        cout<<1<<endl;
        return;
    }

    if(primes<=n && n%primes==0){
        cout<<primes<<endl;
        return;
    }

    if(primes<=n){
        while(n%primes!=0) primes--;
        cout<<primes<<endl;
        return;
    }

    cout<<n<<endl;
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