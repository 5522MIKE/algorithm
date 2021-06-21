/*
 * @Author: MikyMing
 * @Date: 2021-06-20 19:36:48
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-06-20 19:40:21
 * @Description: 哈希表yyds
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/217.存在重复元素.cpp
 */
/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int x: nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};
// @lc code=end

