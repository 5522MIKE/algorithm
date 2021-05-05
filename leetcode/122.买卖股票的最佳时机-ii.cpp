/*
 * @Author: MikyMing
 * @Date: 2021-05-04 19:12:18
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-04 19:18:20
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/122.买卖股票的最佳时机-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {   
        int ans = 0;
        int n = prices.size();
        for (int i = 1; i < n; ++i) {
            ans += max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }
};
// @lc code=end

