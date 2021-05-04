/*
 * @Author: MikyMing
 * @Date: 2021-05-04 02:39:24
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-04 02:45:22
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/121.买卖股票的最佳时机.cpp
 */
/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int inf = 1e9;
        int minprice = inf, maxprofit = 0;
        for (int price: prices) {
            maxprofit = max(maxprofit, price - minprice);
            minprice = min(price, minprice);
        }
        return maxprofit;
    }
};

// @lc code=end

