class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        long n = nums.size();
        long prefix[n+1];
        memset(prefix, 0, sizeof(prefix));
        long count = 0;
        long odd=0;
        for(long i=0; i<n; i++){
            prefix[odd]++;
            if(nums[i]&1){
                odd++;
            }
            if(odd>=k){
                count+=prefix[odd-k];
            }
        }
        return count;
    }
};