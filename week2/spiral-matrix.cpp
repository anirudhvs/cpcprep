class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        // code here 
        long m , n; // m is beg row , n is beg col
        m=n=0;
        while(m<r && n <c){
            for(long i=n; i<c; i++){
                ans.push_back(matrix[m][i]);
            }
            m++;
            for(long i=m; i<r; i++){
                ans.push_back(matrix[i][c-1]);
            }
            c--;
            if(m<r)
            for(long i=c-1; i>=n; i--){
                ans.push_back(matrix[r-1][i]);
            }
            r--;
            if(n<c)
            for(long i=r-1; i>=m; i--){
                ans.push_back(matrix[i][n]);
            }
            n++;
        }
        return ans;
    }
};