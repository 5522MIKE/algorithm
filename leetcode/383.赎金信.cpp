/*
 * @Author: MikyMing
 * @Date: 2021-07-18 10:28:32
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-18 10:50:24
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/383.赎金信.cpp
 */
/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
// 时间复杂度: O(n)
// 空间复杂度：O(1)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = {0};
        for (int i = 0; i < magazine.length(); i++) {
            // 通过recode数据记录 magazine里各个字符出现次数
            record[magazine[i]-'a'] ++; 
        }
        for (int j = 0; j < ransomNote.length(); j++) {
            // 遍历ransomNote，在record里对应的字符个数做--操作
            record[ransomNote[j]-'a']--; 
            // 如果小于零说明 magazine里出现的字符，ransomNote没有
            if(record[ransomNote[j]-'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

