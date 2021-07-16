/*
 * @Author: MikyMing
 * @Date: 2021-07-16 17:42:24
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-16 17:54:15
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/258.各位相加.cpp
 */
/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};
// @lc code=end

