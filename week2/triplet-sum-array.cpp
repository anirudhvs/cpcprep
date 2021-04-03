// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(long i=0; i<n-2; i++){
            long front = i+1, back = n-1;
            long rem = X - A[i];
            while(front<back){
                long cursum = A[front] + A[back];
                if(cursum > rem ){
                    back--;
                }
                else if(cursum<rem){
                    front++;
                }
                else {
                    return 1;
                }
            }
        }
    return 0;
        
    }
    
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends