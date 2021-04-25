class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        long msf = INT_MIN;
        long meh = 0;
        for(long i=0; i<n; i++){
            meh+=arr[i];
            if(msf<meh){
                msf = meh;
            }
            if(meh<0){
                meh = 0;
            }
        }
        return msf;
        
        
    }
};