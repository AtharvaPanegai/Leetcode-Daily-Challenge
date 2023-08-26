class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),compare);
        
        int len = 0;
        for(int i=0,j=0;j<pairs.size();j++){
            if(j==0 || pairs[i][1] <pairs[j][0]){
                len++;
                i=j;
            }
        }
        return len;
    }
    
    private:
        static bool compare(vector<int> &a,vector<int> &b){
            return a[1]<b[1];
        }
};