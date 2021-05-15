/*
 * @Author: MikyMing
 * @Date: 2021-05-15 05:08:51
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-15 05:16:15
 * @Description: set
 * @Analysis: 哈希表很容易想到，不过排序是真的巧妙
 * @FilePath: /algorithm/leetcode/169.多数元素.cpp
 */
/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int majority = 0, cnt = 0;
        for (int num: nums) {
            counts[num]++;
            if (counts[num] > cnt) {
                majority = num;
                cnt = counts[num];
            }
        }
        return majority;
    }
};
// @lc code=end

