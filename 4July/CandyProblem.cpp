#include "bits/stdc++.h"
using namespace std;

int candy(vector<int> &ratings)
{
    int size = ratings.size();
    if (size <= 1)
    {
        return size;
    }

    vector<int> num(size, 1);

    for (int i = 0; i < size; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {
            num[i] = num[i - 1] + 1;
        }
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (ratings[i] < ratings[i - 1])
        {
            num[i - 1] = max(num[i - 1], num[i] + 1);
        }
    }

    int result = 0;
    result = accumulate(num.begin(), num.end(),result);
    return result;
}

int main()
{

    return 0;
}