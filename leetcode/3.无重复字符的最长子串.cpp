/*
 * @Author: MikyMing
 * @Date: 2021-04-25 22:45:35
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-25 22:49:57
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/3.无重复字符的最长子串.cpp
 */
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() == 0)
            return 0;
        unordered_set<char> lookup;
        int maxStr = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (lookup.find(s[i]) != lookup.end())
            {
                lookup.erase(s[left]);
                left++;
            }
            maxStr = max(maxStr, i - left + 1);
            lookup.insert(s[i]);
        }
        return maxStr;
    }
};
// @lc code=end
