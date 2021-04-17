/*
 * @Author: MikyMing
 * @Date: 2021-04-16 23:08:51
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-16 23:13:31
 * @Description: set
 * @Analysis: 二分查找。官方题解里的牛顿迭代很有意思，通过迭代的方法去寻找函数的零点。
 * @FilePath: /algorithm/leetcode/69.x-的平方根.cpp
 */
/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if ((long long)mid * mid <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

