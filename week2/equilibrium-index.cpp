vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here     
    vector<long long int> lp(n), rp(n);
    lp[0] = 1;
    rp[n-1] = 1;
    for(long i=1; i<n; i++){
        lp[i] = nums[i-1] * lp[i-1];
    }
    for(long i=n-2; i>=0; i--){
        rp[i] = nums[i+1] * rp[i+1];
    }
    for(long i=0; i<n; i++){
        nums[i] = lp[i] * rp[i];
    }
    
    
    return nums;
}