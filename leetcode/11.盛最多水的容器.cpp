/*
 * @Author: MikyMing
 * @Date: 2021-04-27 00:22:54
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-27 00:26:55
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/11.盛最多水的容器.cpp
 */
/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);
            if (height[l] <= height[r]) {
                ++l;
            }
            else {
                --r;
            }
        }
        return ans;
    }
};
// @lc code=end

