#define max(a,b) (a>b)? a: b
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        for(long i=0; i<N; i++){
            if(!arr[i]){
                arr[i]=-1;
            }
        }
        int ans = 0;            
        unordered_map<long,long> m;
        long sum = 0;
        for(long i=0; i<N;i++){
            sum+=arr[i];
            if(sum==0){
                ans = i+1;
            }
            if(m.find(sum)!=m.end()){
                ans = max(i-m[sum], ans);
            } 
            else 
                m[sum] = i;
        }
        
    
    
        return ans;
    
    }
};