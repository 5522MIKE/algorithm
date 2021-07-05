/*
 * @Author: MikyMing
 * @Date: 2021-07-05 15:17:59
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-05 15:46:45
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/283.移动零.cpp
 */
/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size(), left = 0, right = 0;
        while (right < n)
        {
            if (nums[right])
            {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};
// @lc code=end
