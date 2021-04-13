/*
 * @Author: MikyMing
 * @Date: 2021-04-13 00:23:44
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-13 00:25:50
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/125.验证回文串.cpp
 */
/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string sgood;
        for (char ch: s) {
            if (isalnum(ch)) {
                sgood += tolower(ch);
            }
        }
        int n = sgood.size();
        int left = 0, right = n - 1;
        while (left < right) {
            if (sgood[left] != sgood[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
// @lc code=end
    
