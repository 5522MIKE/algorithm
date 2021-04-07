/*
 * @Author: MikyMing
 * @Date: 2021-03-31 23:36:17
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-05 23:48:02
 * @Description: set
 * @Analysis: 双指针
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
        if(nums.size() == 0)    
            return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); ++j)
            if(nums[j] != nums[i])  
                nums[++i] = nums[j];
        return i + 1;
    }
};
// @lc code=end

