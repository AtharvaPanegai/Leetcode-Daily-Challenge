#include "bits/stdc++.h"
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    // constructor
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

vector<int> rightViewOfBT(TreeNode *root)
{
    vector<int> v;
    if (!root)
        return v;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            if (i == n - 1)
                v.push_back(temp->val);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return v;
}

int main()
{

    return 0;
}