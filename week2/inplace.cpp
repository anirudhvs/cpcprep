#include<bits/stdc++.h>
using namespace std;

int main(){
    long r, c ;
    //cin>>r>>c;
    r = 5; c= 6;
    long n = r*c;
    long size = n-1;
    long a[n];
    // for(long i=0; i<n; i++){
    //     cin>>a[i];
    // };
    for(int i = 0; i < n; i++)
        a[i] = i+1;

    long t, i, cycle;
    vector<bool> b(n,0);
    b[0] =  b[n-1] =1;
    for(long i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //exit(0);
    i=1;
    while(i<size){
        cycle = i;
        t = a[i];
        do {
            long nl = (i*r) % size;
            swap(a[nl], t);
            b[i] = 1;
            i=nl;
        } while(i!=cycle);

        for(long i=1; i<size && b[i]==1; i++);
    }
    for(long i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}