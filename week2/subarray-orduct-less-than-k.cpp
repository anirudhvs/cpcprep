class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        long long p = 1;
        if(k<=1){
            return 0;
        }
        long ans  = 0;
        long n = nums.size();
        for(long r = 0; r<n; r++){
            p*=nums[r];
            while(p>=k){
                p=p/nums[l++];
            }
            ans+=r-l+1;
        }
        return ans;
    }
};