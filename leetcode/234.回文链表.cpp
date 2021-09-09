/*
 * @Author: MikyMing
 * @Date: 2021-09-09 16:01:44
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-09-09 16:10:36
 * @Description: set
 * @Analysis: O(1) 是真的麻烦,使用栈进行储存再进行对比
 * @FilePath: /algorithm/leetcode/234.回文链表.cpp
 */
/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (!head)
            return false;

        stack<int> s;
        ListNode *p = head;
        while (p)
        {
            s.push(p->val);
            p = p->next;
        }

        while (head)
        {
            int sVal = s.top();
            s.pop();
            if (head->val != sVal)
                return false;
            head = head->next;
        }

        return true;
    }
};
// @lc code=end
