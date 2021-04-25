class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        long n = nums.size();
        // for(long i =0; i<n; i++){
        //     cout<<nums[i]<<" ";
        // }
        //cout<<endl;
        vector<vector<int>>  answer;
        set< vector<int> > s;
        set< vector<int> >::iterator it;
        for(long i=0; i<n-3; i++){
            
            for(long j=i+1; j<n-2; j++){
                long front = j+1; long back = n-1;
                while(front<back)
                {
                
                long a = nums[i];
                long b = nums[j];
                long c = nums[front];
                long d = nums[back];
                long sum =  a + b + c + d;
               // cout<<"D: "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<sum<<endl;
                if(sum == target){
                    s.insert(vector<int>({nums[i], nums[j], nums[front], nums[back]}));
                    while(front<back && c == nums[front]){
                        front++;
                    }
                    while(front<back && d == nums[back]){
                        back--;
                    }
                    
                }
                
                if(sum<target){
                    while(front<back && c == nums[front]){
                        front++;
                    }
                }
                
                if(sum>target){
                    while(front<back && d == nums[back]){
                        back--;
                    }
                }
                //cout<<"Changed f and b "<<front<<" "<<back<<endl;
                }
            }   
        }
        for(it = s.begin(); it!=s.end(); it++){
            answer.push_back(*it);
        }
        return answer;
    }
};
