class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int second=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[second++] = nums[i];
            }
        }
        for(;second<nums.size();second++){
            nums[second] = 0;
        }
    }   
};