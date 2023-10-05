class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int n = nums.size();
        int reqSize = n/3;
        vector<int> ans;
        for(auto it:mp){
            if(it.second>reqSize){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};