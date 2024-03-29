/*
 * @Author: MikyMing
 * @Date: 2021-06-20 01:05:34
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-06-20 01:19:56
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/278.第一个错误的版本.cpp
 */
/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) { // 循环直至区间左右端点相同
            int mid = left + (right - left) / 2; // 防止计算时溢出
            if (isBadVersion(mid)) {
                right = mid; // 答案在区间 [left, mid] 中
            } else {
                left = mid + 1; // 答案在区间 [mid+1, right] 中
            }
        }
        // 此时有 left == right，区间缩为一个点，即为答案
        return left;
    }
};
// @lc code=end

