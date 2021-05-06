/*
 * @Author: MikyMing
 * @Date: 2021-05-05 21:17:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-05 21:21:16
 * @Description: set
 * @Analysis: 异或计算真的太骚了。
 * @FilePath: /algorithm/leetcode/136.只出现一次的数字.cpp
 */
/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto e: nums) ret ^= e;
        return ret;
    }
};
// @lc code=end

