/*
 * @Author: MikyMing
 * @Date: 2021-07-21 23:51:16
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-21 23:55:18
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/441.排列硬币.cpp
 */
/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        return (sqrt(1+8*(long)n)-1)/2;
    }
};
// @lc code=end

