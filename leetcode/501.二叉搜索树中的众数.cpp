/*
 * @Author: MikyMing
 * @Date: 2021-07-30 15:21:39
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-30 15:29:34
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/501.二叉搜索树中的众数.cpp
 */
/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> answer;
    // base为当前数字，count为当前计数，maxCount为最大计数
    int base, count, maxCount; 
    void update(int x) {
        if (x == base) {
            ++count;
        } else {
            count = 1;
            base = x;
        }
        if (count == maxCount) {
            answer.push_back(base);
        }
        if (count > maxCount) {
            maxCount = count;
            answer = vector<int> {base};
        }
    }

    void dfs(TreeNode* tree1) {
        if (!tree1) {
            return;
        }
        dfs(tree1->left);
        update(tree1->val);
        dfs(tree1->right);
    }

    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return answer;
    }
};
// @lc code=end

