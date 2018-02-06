class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for ( int i =0;i < matrix.size();i++){
            for( int col = 0; col < matrix[0].size(); col ++){
                if( i > 0 && col > 0 && matrix [i-1][col-1] != matrix[i][col])
                    return false;
            }
        }
        return true;
    }
};