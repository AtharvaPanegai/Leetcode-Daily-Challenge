class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     int rows = matrix.size();
        int cols = matrix[0].size();
        priority_queue<int> p;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                p.push(matrix[i][j]);
                if(p.size()>k) p.pop();
            }
        }
        return p.top();
    }
};