/*
 * @Author: MikyMing
 * @Date: 2021-06-25 08:33:26
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-06-25 08:36:06
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/6.z-字形变换.cpp
 */
/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1) return s;

        string ret;
        int n = s.size();
        int cycleLen = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                ret += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    ret += s[j + cycleLen - i];
            }
        }
        return ret;
    }
};
// @lc code=end

