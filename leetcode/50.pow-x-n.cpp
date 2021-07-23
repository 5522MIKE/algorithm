/*
 * @Author: MikyMing
 * @Date: 2021-07-23 23:25:31
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-23 23:32:00
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/50.pow-x-n.cpp
 */
/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double quickMul(double x, long long N) {
        if (N == 0) {
            return 1.0;
        }
        double y = quickMul(x, N / 2);
        return N % 2 == 0 ? y * y : y * y * x;
    }

    double myPow(double x, int n) {
        long long N = n;
        return N >= 0 ? quickMul(x, N) : 1.0 / quickMul(x, -N);
    }
};

// @lc code=end

