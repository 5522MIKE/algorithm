/*
 * @Author: MikyMing
 * @Date: 2021-07-04 01:26:59
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-04 01:31:25
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/645.错误的集合.cpp
 */
/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> errorNums(2);
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int prev = 0;
        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            if (curr == prev) {
                errorNums[0] = prev;
            } else if (curr - prev > 1) {
                errorNums[1] = prev + 1;
            }
            prev = curr;
        }
        if (nums[n - 1] != n) {
            errorNums[1] = n;
        }
        return errorNums;
    }
};
// @lc code=end

