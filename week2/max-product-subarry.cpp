class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long msf = INT_MIN;
	    long long mieh = 1;
	    long long maeh = 1;
	    for(long i=0;i<n; i++){
	        
	        if(arr[i]>0){
	            maeh *= arr[i];
	            mieh = min(mieh*arr[i], 1);
	        }
	        else if(arr[i]==0){
	            maeh = 1;
	            mieh = 1;
	        }
	        else {
	            long temp = maeh;
	            maeh = max(mieh*arr[i], 1);
	            mieh = temp * arr[i];
	        }
	        if(msf<maeh){
	            msf = maeh;
	        }
	    }
	    return msf;
	}
};