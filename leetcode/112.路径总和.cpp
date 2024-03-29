/*
 * @Author: MikyMing
 * @Date: 2021-04-23 00:06:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-23 00:22:41
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/112.路径总和.cpp
 */
/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode *root, int sum) {
        if (root == nullptr) {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return sum == root->val;
        }
        return hasPathSum(root->left, sum - root->val) ||
                hasPathSum(root->right, sum - root->val);
    }
};
// @lc code=end

