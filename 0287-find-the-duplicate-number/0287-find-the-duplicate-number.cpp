class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         create two pointers to traverse through the vector and put on index 0
        int slow = nums[0];
        int fast = nums[0];
        
//         slow by 1 and fast by 2
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);
        
//         at the time of first collision put the fast pointer at 0 index and again traverse
       fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};