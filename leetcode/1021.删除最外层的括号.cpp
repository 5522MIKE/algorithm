/*
 * @Author: MikyMing
 * @Date: 2021-07-26 21:27:40
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-26 21:37:39
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/1021.删除最外层的括号.cpp
 */
/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
 */

// @lc code=start
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int left = 1, right = 0;
        string ans;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                left++;
            }
            else
            {
                right++;
            }
            if (right != left)
            {
                ans.push_back(s[i]);
            }
            else
            {
                i++;
                left=1;
                right=0;
            }
        }
        return ans;
    }
};
// @lc code=end
