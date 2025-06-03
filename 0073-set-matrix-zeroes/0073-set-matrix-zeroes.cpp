class Solution {
public:
void setrow(vector<vector<int>>& matrix,int i){
    //set it into -1;
    //traverse in column
    for(int j =0;j<matrix[0].size();j++){
        if(matrix[i][j]!=0)
        matrix[i][j]=-10;
    }
}
void setcol(vector<vector<int>>& matrix,int j){
    //set it into -1;
    //traverse in column
    for(int i =0;i<matrix.size();i++){
         if(matrix[i][j]!=0)
        matrix[i][j]=-10;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        //traverse in a matrix asnd when arr[i][j]==0 set it into -1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    setrow(matrix,i);
                    setcol(matrix,j);
                }
            }
        }
    
    //at the end set it as 0 where is -1
    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
              if(matrix[i][j]==-10){
                matrix[i][j]=0;
              }
            }
            }
    }
};