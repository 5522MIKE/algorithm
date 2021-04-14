/*
 * @Author: MikyMing
 * @Date: 2021-04-14 08:19:05
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-14 08:25:54
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/58.最后一个单词的长度.cpp
 */
/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0, i = s.size()-1;
        while(i >= 0 && s[i] == ' ') --i;
        while(i >= 0 && s[i--] != ' ') ++c;
        return c;
    }
};
// @lc code=end

