class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> store;
        store = nums;
        sort(store.begin(),store.end());
        
        int low = 0;
        int high = nums.size()-1;
        int n1,n2;
        while(low<high){
    
            if(store[low]+store[high] == target){
                n1 = store[low];
                n2 = store[high];
                break;
            }else if(store[low]+store[high]>target){
                high--;
                
            }else{
                low++;
            }
        }
        
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n1){
                sol.push_back(i);
            }
            else if(nums[i]==n2){
                sol.push_back(i);
            }
        }
        return sol;
    }
};