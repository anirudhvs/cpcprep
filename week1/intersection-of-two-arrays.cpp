// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in intersection of two arrays.
    int doIntersection(int a[], int n, int b[], int m)  {
        //code here
        set<int> s;
        int answer = 0;
        for(int i =0; i<n; i++){
            if(s.find(a[i])!=s.end()){
                answer++;
            }
            else
                s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            if(s.find(b[i])!=s.end()){
                answer++;
            }
            else
                s.insert(b[i]);
        }
        return answer;
    }
};
// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doIntersection(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
