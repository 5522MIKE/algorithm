/*
 * @Author: MikyMing
 * @Date: 2021-04-24 18:57:53
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-25 01:25:39
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/915.分割数组.cpp
 */
/*
 * @lc app=leetcode.cn id=915 lang=cpp
 *
 * [915] 分割数组
 */

// @lc code=start
class Solution
{
public:
    int partitionDisjoint(vector<int> &A)
    {
        int l = A.size();
        int j = 0;
        int leftMax = A[0];
        for (int i = 1; i < l; i++)
        {
            if (A[i] >= leftMax)
            {
                for (j = i + 1; j < l; j++)
                {
                    if (A[j] < leftMax)
                    {
                        break;
                    }
                }
                if (j == l)
                {
                    return i;
                }
                else
                {
                    leftMax = A[i];
                }
            }
        }
        return 0;
    }
};
// @lc code=end
