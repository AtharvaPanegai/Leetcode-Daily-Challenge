class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
//         first we'll find out the size of matrix
        int n = matrix.size();
        int m = matrix[0].size();
        
//         intilize 3 vars for binary search
        int low=0;
        int high = (n*m)-1;
        
        while(low<=high){
            int mid = (low+(high-low)/2);
//             depending upon the matrix position we'll get the value from the mid/m and mid%m
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m]<target){
                low = mid+1;
                
            }
            if(matrix[mid/m][mid%m]>target){
                high = mid-1;
            }
        }
        return false;
    }
};