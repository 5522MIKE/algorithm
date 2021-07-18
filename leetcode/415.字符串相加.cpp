/*
 * @Author: MikyMing
 * @Date: 2021-07-18 23:16:39
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-18 23:22:51
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/415.字符串相加.cpp
 */
/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, t = 0;
        string res = "";
        
        while (i >= 0 || j >= 0 || t != 0)
        {
            if (i >= 0) t += num1[i] - '0';
            if (j >= 0) t += num2[j] - '0';
            res.push_back('0' + t % 10);
            t /= 10;
            -- i, -- j;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

