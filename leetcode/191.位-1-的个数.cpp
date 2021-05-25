/*
 * @Author: MikyMing
 * @Date: 2021-05-24 22:37:02
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-24 22:39:02
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/191.位-1-的个数.cpp
 */
/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                ret++;
            }
        }
        return ret;
    }
};

// @lc code=end

