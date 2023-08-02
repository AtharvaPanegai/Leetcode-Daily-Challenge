class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int> > res;
        recursivePermute(nums,0,res);
        
        return res;
    }
    void recursivePermute(vector<int> &num,int begin,vector<vector<int>> &result){
        if(begin>=num.size()){
            result.push_back(num);
            return;
        }
        
        for(int i=begin;i<num.size();i++){
            swap(num[i],num[begin]);
            recursivePermute(num,begin+1,result);
            swap(num[begin],num[i]);
        }
    }
};