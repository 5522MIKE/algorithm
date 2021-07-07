/*
 * @Author: MikyMing
 * @Date: 2021-07-07 23:00:55
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-07 23:06:04
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/231.2-的幂.cpp
 */
/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
// @lc code=end

