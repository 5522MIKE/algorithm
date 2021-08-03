/*
 * @lc app=leetcode.cn id=563 lang=cpp
 *
 * [563] 二叉树的坡度
 */

// @lc code=start
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
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        int tile = 0;
        int summ = sum(root,tile);
        return tile;
    }
private:
    int sum(TreeNode *root, int& tile){
        if(!root) return 0;
        int l = sum(root->left,tile);
        int r = sum(root->right,tile);
        //坡度等于之前的坡度的累积加上自己的坡度
        tile += abs(l-r);
        //树的和 = 左子树的和 + 右子树的和 + 结点的val
        return(root->val + l + r);
    }
};
// @lc code=end

