#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    long a[n];
    for(long i=0; i<n; i++){
        cin>>a[i];
    }
    srand(time(NULL));
    for(long i = n-1; i>=0; i--){
        long j = rand() %(i+1);
        swap(a[i], a[j]);
    }
    for(long i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

}