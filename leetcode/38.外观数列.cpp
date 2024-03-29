/*
 * @Author: MikyMing
 * @Date: 2021-04-15 04:03:00
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-15 04:13:00
 * @Description: set
 * @Analysis: 还有双指针的做法，也很巧妙
 * @FilePath: /algorithm/leetcode/38.外观数列.cpp
 */
/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";

        string previous = countAndSay(n-1), result = ""; // 使用递归来一层一层往前推
        int count = 1; // count用来计数

        for(int i=0;i<previous.length();i++)
        {
            if(previous[i] == previous[i+1])
            {
                count ++; // 比如previous是111221时，111部分会让count=3，此时i在第三个1处
            }
            else
            {
                result += to_string(count) + previous[i]; // result会从空变成“31”（当i在第三个1处时）
                count = 1; // 由于i在第三个1处时，i+1处的值为2，1 != 2，所以count重新变成1
            }
        }

        return result;
    }
};
// @lc code=end

