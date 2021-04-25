class Solution{
    public:
    // Function to return maximum of sum without adjacent elements
    ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
        long incl=arr[0];
        long excl=0;
        for(long i=1; i<n;i++){
            long newexcl = (incl>excl) ? incl:excl;
            incl = excl + arr[i];
            excl = newexcl;
        }
        return (incl>excl)? incl: excl;
    }
};