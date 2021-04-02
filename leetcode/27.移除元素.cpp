/*
 * @Author: MikyMing
 * @Date: 2021-04-02 08:18:27
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-02 08:40:23
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/27.移除元素.cpp
 */
/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0 || nums.empty()) return 0;
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++) {
            //快指针元素不等于给定值时，赋值给慢指针位置
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
            //快指针元素等于给定值时，跳过本次循环
            else {
                continue;
            }
        }
        //遍历结束时，slow索引位置的元素等于指定值（新数组个数slow，索引0~slow-1）
        return slow;
    }
};
// @lc code=end

