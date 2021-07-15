/*
 * @Author: MikyMing
 * @Date: 2021-07-15 16:15:01
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-15 16:18:11
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/389.找不同.cpp
 */
/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int as = 0, at = 0;
        for (char ch: s) {
            as += ch;
        }
        for (char ch: t) {
            at += ch;
        }
        return at - as;
    }
};
// @lc code=end

