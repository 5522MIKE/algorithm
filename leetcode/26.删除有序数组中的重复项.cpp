/*
 * @Author: MikyMing
 * @Date: 2021-03-31 23:36:17
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-03-31 23:36:58
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/26.删除有序数组中的重复项.cpp
 */
/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums)
            if (!i || n > nums[i-1])
                nums[i++] = n;
        return i;
    }
};
// @lc code=end

