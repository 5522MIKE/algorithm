/*
 * @Author: MikyMing
 * @Date: 2021-07-19 23:41:14
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-19 23:47:41
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/55.跳跃游戏.cpp
 */
/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int rightmost = 0;
        for (int i = 0; i < n; ++i) {
            if (i <= rightmost) {
                rightmost = max(rightmost, i + nums[i]);
                if (rightmost >= n - 1) {
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

