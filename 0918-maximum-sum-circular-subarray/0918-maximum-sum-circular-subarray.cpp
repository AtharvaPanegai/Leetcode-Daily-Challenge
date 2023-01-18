class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=INT_MIN,currMax=0,currMin=0,minSum=INT_MAX,total=0;
        
        for(int i:nums){
            currMax = max(currMax+i,i);
            maxSum = max(maxSum,currMax);
            currMin = min(currMin+i,i);
            minSum = min(currMin,minSum);
            total+=i;
        }
      return maxSum>0?max(maxSum,total-minSum):maxSum;
    }
};