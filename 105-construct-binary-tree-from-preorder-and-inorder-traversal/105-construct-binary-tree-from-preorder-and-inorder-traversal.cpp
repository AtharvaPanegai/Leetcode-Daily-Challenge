/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *build(vector<int> &preorder,int preStart,int preEnd,vector<int> &inOrder,int inStart,int inEnd,map<int,int> &mp){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        
        TreeNode *root = new TreeNode(preorder[preStart]);
        int inRoot = mp[root->val];
        int numsOnLeft = inRoot-inStart;
        
        root->left = build(preorder,preStart+1,preStart+numsOnLeft,inOrder,inStart,inRoot-1,mp);
        root->right = build(preorder,preStart+numsOnLeft+1,preEnd,inOrder,inRoot+1,inEnd,mp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode *root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        
        return root;
    }
};