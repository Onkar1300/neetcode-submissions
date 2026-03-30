class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col = 1;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0){
                col = 0;
            }
        }
        int row = 1;
        for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                row = 0;
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        for(int i=matrix.size()-1;i>0;i--){
            for(int j=matrix[0].size()-1;j>0;j--){
                if(matrix[i][0]==0){
                    matrix[i][j] = 0;
                }
                if(matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(!col){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }
        if(!row){
            for(int i=0;i<matrix[0].size();i++){
                matrix[0][i]=0;
            }
        }
    }
};
