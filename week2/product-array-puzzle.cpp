#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here     
    vector<long long int> lp, rp;
    lp[0] = 1;
    rp[n-1] = 1;
    for(long i=1; i<n; i++){
        lp[i] = nums[i] * lp[i-1];
    }
    for(long i=n-2; i>=0; i--){
        rp[i] = nums[i] * rp[i+1];
    }
    for(long i=0; i<n; i++){
        nums[i] = lp[i] * rp[i];
    }
    
    
    return nums;
}