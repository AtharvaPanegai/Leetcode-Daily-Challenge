#include "bits/stdc++.h"
using namespace std;

int maxSeq(vector<int> &nums)
{
    int ans = 1;
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                count++;
            }
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }

    return max(count, ans);
}

int main()
{

    return 0;
}