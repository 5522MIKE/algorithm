/*
 * @Author: MikyMing
 * @Date: 2021-04-04 08:41:50
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-04 08:45:33
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/66.加一.cpp
 */
/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = true;
        // 循环进位
        for(int i=digits.size()-1; i >= 0 && carry; i--) {
            carry = (++digits[i]%=10) == 0;
        }
        // 若位数均为0，则首项加一
        if(carry) {
            digits.insert(digits.begin(), 1);
        }
    
        return digits;
    }
};
// @lc code=end

