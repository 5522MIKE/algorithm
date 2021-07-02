/*
 * @Author: MikyMing
 * @Date: 2021-07-02 06:57:16
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-02 07:07:37
 * @Description: set
 * @Analysis: 笑死我了，居然ac了
 * @FilePath: /algorithm/leetcode/292.nim-游戏.cpp
 */
/*
 * @lc app=leetcode.cn id=292 lang=cpp
 *
 * [292] Nim 游戏
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
            return false;
        else
            return true;
    }
};
// @lc code=end

