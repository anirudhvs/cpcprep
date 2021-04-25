class Solution
{   
public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        long r = matrix.size();
        long c = matrix[0].size();
        bool row=0, col=0;
        for(long i=0; i<c; i++){
            
            if(matrix[0][i]){
                row = 1;
                break;
            }
        }
        for(long i=0; i<r; i++){
            
            if(matrix[i][0]){
                col = 1;
                break;
            }
        }
        
        for(long i=1; i<r; i++){
            for(long j=1;j<c; j++){
                
                if(matrix[i][j]){
                    matrix[0][j]=1;
                    matrix[i][0]=1;
                }
            }
        }
        
        
        for(long i=1; i<r; i++){
            for(long j=1; j<c; j++){
                if(matrix[i][0] || matrix[0][j]){
                    matrix[i][j] = 1;
                }
            }
        }
        if(row){
            for(long i=0; i<c; i++){
                matrix[0][i] =1;
            }
        }
        if(col){
            for(long i=0; i<r;i++){
                matrix[i][0]=1;
            }
        }
        
    }
};