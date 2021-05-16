/*
 * @Author: MikyMing
 * @Date: 2021-05-16 01:40:37
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-16 01:41:16
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/171.excel表列序号.cpp
 */
/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i=0;
        long long sum=0;
        while(i<columnTitle.length()){
            sum=sum*26+columnTitle[i++]-'A'+1;
        }
        return sum;
    }
};
// @lc code=end

