class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        //runtime error: reference binding to null pointer of type 'value_type' (stl_vector.h)
        //to solve this error, we need to first assign the size to each col second assign the size to each row.
        vector<vector<int>> trans(A[0].size());//A[0].size() is the size for each row of trans
        //for (int i = 0;  i < A.size(); i++) 
        //    trans[i].resize(A[0].size());
        for(int i = 0; i < A[0].size(); i++){
            //if we assign size to each row here, then we have to use each sized first. ex. trans[i][j]
            trans[i].resize(A.size());//A.size() is the size for each col of trans
            for(int j = 0; j < A.size(); j++){
                //trans[j][i] = A[i][j];
                trans[i][j] = A[j][i];
            }
        }
        return trans;

    }
};