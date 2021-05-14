/*
 * @Author: MikyMing
 * @Date: 2021-05-14 08:33:59
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-14 08:36:16
 * @Description: set
 * @Analysis: 本质是26进制转换为10进制
 * @FilePath: /algorithm/leetcode/168.excel表列名称.cpp
 */
/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            columnNumber-=1;
            s+='A'+columnNumber%26;
            columnNumber/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
// @lc code=end

