//832. Flipping an Image

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
  /*
        for(int i = 0; i < A.size(); i++){
            for(int j = 0, end = A[i].size()-1; j < end; j++, end--){
                if(A[i][j] != A[i][end] && A[i][j] == 0){
                    A[i][j] = 1;
                    A[i][end] = 0;
                }
                else if(A[i][j] != A[i][end] && A[i][j] == 1){
                    A[i][j] = 0;
                    A[i][end] = 1;
                }
            }   
        }

        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++){
                if(A[i][j] == 0)
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
            }
        }
  */

           
  //note that we can combine two for loops into one as below.
  for(int i = 0; i < A.size(); i++){
    for(int j = 0, end = A[i].size()-1; j <= end; j++, end--){
      //if the start and end values are different, then after reverse and invert them they will be the same. So, we only filp the ones that are the same value. 
      if(A[i][j] == A[i][end] && A[i][j] == 0 && j != end){
	A[i][j] = 1;
	A[i][end] = 1;
      }
      else if(A[i][j] == A[i][end] && A[i][j] == 1 && j != end){
	A[i][j] = 0;
	A[i][end] = 0;
      }
                
      //this is the special case when start and end are the same position of A
      else if(j == end){  
	if(A[i][end] == 0)
	  A[i][end] = 1;
	else if(A[i][end] == 1)
	  A[i][end] = 0;
      }
                    
    }   
  }
      
  return A;   
}
