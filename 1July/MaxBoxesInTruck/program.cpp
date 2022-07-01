#include "bits/stdc++.h"
using namespace std;

int maximumUnits(vector<vector<int>> &boxes, int truckSize)
{
    int res = 0, currBatch = 0;
    // now sort the array in decreasing order
    sort(boxes.begin(), boxes.end(), [](auto &a, auto &b)
         { return a[1] > b[1]; });
    for (auto &el : boxes)
    {
        currBatch = min(truckSize, el[0]);
        truckSize -= currBatch;
        if (!truckSize)
        {
            break;
        }
        res += currBatch * el[1];
    }

    return res;
}

int main()
{

    return 0;
}