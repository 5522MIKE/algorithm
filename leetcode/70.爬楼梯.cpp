/*
 * @Author: MikyMing
 * @Date: 2021-04-05 08:24:56
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-05 08:28:12
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/70.爬楼梯.cpp
 */
/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int StepOne = 1;
        int StepTwo = 0;
        int ret = 0;
        for(int i=0;i<n;i++)
        {
            ret = StepOne + StepTwo;
            StepTwo = StepOne;
            StepOne = ret;
        }
        return ret;
    }
};
// @lc code=end

