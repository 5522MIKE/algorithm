/*
 * @Author: MikyMing
 * @Date: 2021-04-24 00:48:30
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-24 00:51:50
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/118.杨辉三角.cpp
 */
/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows; ++i) {
            ret[i].resize(i + 1);
            ret[i][0] = ret[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
        }
        return ret;
    }
};
// @lc code=end

