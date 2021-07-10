/*
 * @Author: MikyMing
 * @Date: 2021-07-10 15:39:19
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-10 15:41:17
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/263.丑数.cpp
 */
/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        vector<int> factors = {2, 3, 5};
        for (int factor : factors) {
            while (n % factor == 0) {
                n /= factor;
            }
        }
        return n == 1;
    }
};
// @lc code=end

