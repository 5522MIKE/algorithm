/*
 * @Author: MikyMing
 * @Date: 2021-07-03 03:07:12
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-03 03:11:41
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/97.交错字符串.cpp
 */
/*
 * @lc app=leetcode.cn id=97 lang=cpp
 *
 * [97] 交错字符串
 */

// @lc code=start
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = (int) s1.size();
        int len2 = (int) s2.size();
        int len3 = (int) s3.size();
        if (len1 + len2 != len3) return false;
        vector<vector<bool>> dp(len1 + 1, vector<bool>(len2 + 1, false));
        dp[0][0] = true;
        for (int i = 1; i <= len1; i++) {
            dp[i][0] = dp[i - 1][0] && s1[i - 1] == s3[i - 1];
        }
        for (int j = 1; j <= len2; j++) {
            dp[0][j] = dp[0][j - 1] && s2[j - 1] == s3[j - 1];
        }
        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                dp[i][j] = (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1]) || (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }
        return dp[len1][len2];
    }
};
// @lc code=end

