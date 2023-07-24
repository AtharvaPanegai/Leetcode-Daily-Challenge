class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = INT_MAX;
        int maxProfit = INT_MIN;
        int profit = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            minSoFar = min(minSoFar,prices[i]);
            profit = prices[i]-minSoFar;
            maxProfit = max(maxProfit,profit);
                    
        }
        return maxProfit;
    }
};