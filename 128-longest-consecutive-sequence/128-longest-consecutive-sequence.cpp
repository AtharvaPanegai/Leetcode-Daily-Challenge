class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int ans = 1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
                if(nums[i]==nums[i-1]+1)
                    count++;
                else{
                    ans = max(count,ans);
                    count=1;
                }
        }
        
        return max(ans,count);
    }
};