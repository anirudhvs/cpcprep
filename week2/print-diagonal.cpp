#include <stdio.h>

int main() {
    int t, n;
	//code
	//cin>>t;
	scanf("%d", &t);
	while(t--){
	    //cin>>n;
	    scanf("%d", &n);
	    int a[n][n];
	    for(long i=0; i<n; i++)
	        for(long j=0; j<n; j++)
	            //cin>>a[i][j];
	            scanf("%d", &a[i][j]);
	   long m ,N; 
	   m=0;
	   N=n;
	   n=0;
	   while(n<N){
	       
	       long i=m, j = n;
	       while(i>=0 && j<N){
	           //cout<<a[i][j]<<" ";
	           printf("%d ", a[i][j]);
	           i--; j++;
	       }
	       //cout<<endl;
	       printf("\n");
	       if(m<N-1){
	           m++;
	       } else {
	           n++;
	       }
	       
	   }
	}
	
	return 0;
}