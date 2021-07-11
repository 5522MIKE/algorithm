/*
 * @Author: MikyMing
 * @Date: 2021-07-11 17:13:25
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-11 17:20:00
 * @Description: 
 * 利用 \text{Brian Kernighan}Brian Kernighan 算法，
 * 可以在一定程度上进一步提升计算速度。\text{Brian Kernighan}Brian Kernighan 
 * 算法的原理是：对于任意整数 xx，令 x=x~\&~(x-1)x=x & (x−1)，该运算将 xx 的二进制表示的最后一个 11 变成 00。
 * 因此，对 xx 重复该操作，直到 xx 变成 00，则操作次数即为 xx 的「一比特数」。
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/338.比特位计数.cpp
 */
/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution
{
public:
    int countOnes(int x)
    {
        int ones = 0;
        while (x > 0)
        {
            x &= (x - 1);
            ones++;
        }
        return ones;
    }
    vector<int> countBits(int n)
    {
        vector<int> arr(n + 1);
        for (int i = 0; i <= n; i++)
        {
            arr[i] = countOnes(i);
        }
        return arr;
    }
};
// @lc code=end
