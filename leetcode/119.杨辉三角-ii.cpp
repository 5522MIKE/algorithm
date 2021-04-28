/*
 * @Author: MikyMing
 * @Date: 2021-04-28 08:36:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-28 08:37:58
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/119.杨辉三角-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre, cur;
        for (int i = 0; i <= rowIndex; ++i) {
            cur.resize(i + 1);
            cur[0] = cur[i] = 1;
            for (int j = 1; j < i; ++j) {
                cur[j] = pre[j - 1] + pre[j];
            }
            pre = cur;
        }
        return pre;
    }
};
// @lc code=end

