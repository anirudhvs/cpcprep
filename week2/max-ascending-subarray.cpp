class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        long n= nums.size();
        long msf=nums[0];
        long meh=nums[0];
        long prev = nums[0];
        for(long i=1; i<n;i++){
            meh+=nums[i];
            if(prev>=nums[i]){
                meh=nums[i];
            }
                
            if(meh>msf){
                msf=meh;
            } 
            prev= nums[i];
        }
        return msf;
    }
};