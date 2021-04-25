#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n, d;
    cin>>n>>d;
    long a[n];
    for(long i=0; i<n; i++){
        cin>>a[i];
    }
    d = d%n;
    long GCD = __gcd(n, d);
    for(long i=0; i<GCD; i++){
        long t = a[i];
        long j = i;
        while (1)
        {
            long k = j+d;
            if(k>=n)
                k = k-n;

            if(k==i)
                break;

            a[j] = a[k];
            j = k;

        } 
        a[j] = t;
    }
    for(long i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{

    int t; 
    //cin>>t;
    t = 1;

    while (t--)
    {
        solve();
    }
    

    return 0;
}