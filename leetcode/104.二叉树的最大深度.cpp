/*
 * @Author: MikyMing
 * @Date: 2021-04-17 23:16:57
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-17 23:18:03
 * @Description: set
 * @Analysis: DFS
 * @FilePath: /algorithm/leetcode/104.二叉树的最大深度.cpp
 */
/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
// @lc code=end

