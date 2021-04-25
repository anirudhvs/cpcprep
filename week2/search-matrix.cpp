class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    long i=0; long j=M-1;
	    
	    while(i<N && j>-1){
	        if(mat[i][j]==X){
	            return 1;
	        }
	        else if( mat[i][j]>X){
	            j--;
	        }
	        else {
	            i++;
	        }
	    }
	    return 0;
	}
};
