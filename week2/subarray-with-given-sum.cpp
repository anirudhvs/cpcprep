class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	int ans = 0;
    	unordered_map<long, long> m;
    	
    	long cursum = 0;
    	for(long i=0; i<n; i++){
    	    
    	    cursum+=arr[i];
    	    if(cursum==sum){
    	        ans++;
    	    }
    	    if(m.find(cursum-sum)!=m.end()){
    	        ans++;
    	    }
    	    m[cursum] = i;
    	}
    	return ans;
    }
};