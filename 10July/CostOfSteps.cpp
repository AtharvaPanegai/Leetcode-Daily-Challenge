#include "bits/stdc++.h"
using namespace std;

int minCost(vector<int> &cost)
{
    // put the total cost of the current step and the previous step in the present step
    for (int i = 2; i < cost.size(); i++)
    {
        cost[i] += min(cost[i - 1], cost[i - 2]);
    }
    return min(cost[cost.size() - 1], cost[cost.size() - 2]);
}

int main()
{

    return 0;
}