/*
 * @Author: MikyMing
 * @Date: 2021-05-13 08:43:15
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-13 08:46:05
 * @Description: set
 * @Analysis: 双指针超快
 * @FilePath: /algorithm/leetcode/167.两数之和-ii-输入有序数组.cpp
 */
/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size() - 1;
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};
            } else if (sum < target) {
                ++low;
            } else {
                --high;
            }
        }
        return {-1, -1};
    }
};
// @lc code=end

