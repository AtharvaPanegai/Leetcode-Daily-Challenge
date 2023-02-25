class Solution {
public:
    int maxProfit(vector<int>& arr) {
    int minSoFar = arr[0];
    int maxProfitSoFar = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        minSoFar = min(arr[i], minSoFar);
        maxProfitSoFar = max(maxProfitSoFar, (arr[i] - minSoFar));
    }
    return maxProfitSoFar;
    }
};