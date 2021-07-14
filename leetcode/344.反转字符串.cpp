/*
 * @Author: MikyMing
 * @Date: 2021-07-14 22:43:48
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-14 22:45:23
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/344.反转字符串.cpp
 */
/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int left = 0, right = n - 1; left < right; ++left, --right) {
            swap(s[left], s[right]);
        }
    }
};
// @lc code=end

