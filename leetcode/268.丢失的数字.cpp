/*
 * @Author: MikyMing
 * @Date: 2021-07-13 18:20:28
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-13 19:05:31
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/268.丢失的数字.cpp
 */
/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        return (nums.size()+1)*nums.size()/2 - sum;
    }
};
// @lc code=end

