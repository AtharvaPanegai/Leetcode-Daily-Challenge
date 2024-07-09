class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double customerWaitTime = 0, currentTime = 0;
        
        for(auto &customer : customers){
            currentTime = max(currentTime,1.0*customer[0]) + customer[1];
            customerWaitTime += currentTime - customer[0];
        }
        
        return 1.0 * (customerWaitTime/customers.size());
    }
};