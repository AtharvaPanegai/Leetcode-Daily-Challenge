class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int ans=0;
        unordered_map<int,int> mp;
        for(int i:nums){
            ans+=mp[i]++;
        }
        return ans; 
    }
};