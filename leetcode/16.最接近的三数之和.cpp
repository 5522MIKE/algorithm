/*
 * @Author: MikyMing
 * @Date: 2021-04-27 01:29:30
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-27 01:40:27
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/16.最接近的三数之和.cpp
 */
/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution
{
public:
    static bool cmp(int x, int y)
    {
        return x < y;
    }
    int threeSumClosest(vector<int> &nums, int target)
    {
        int min = INT32_MAX;
        sort(nums.begin(), nums.end(), cmp);
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                if (min > abs(nums[i] + nums[left] + nums[right] - target))
                {
                    min = abs(nums[i] + nums[left] + nums[right] - target);
                }
                if ((nums[i] + nums[left] + nums[right]) > target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        int x, y, z;
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                if (min == abs(nums[i] + nums[left] + nums[right] - target))
                {
                    x = nums[i];
                    y = nums[left];
                    z = nums[right];
                    break;
                }
                if ((nums[i] + nums[left] + nums[right]) > target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        if (x + y + z < target)
        {
            return target - min;
        }
        return target + min;
    }
};
// @lc code=end
