/*
 * @Author: MikyMing
 * @Date: 2021-05-10 07:20:38
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-10 07:26:02
 * @Description: set
 * @Analysis: 可以用栈和快慢指针来做。这里使用栈来实现
 * @FilePath: /algorithm/leetcode/19.删除链表的倒数第-n-个结点.cpp
 */
/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0, head);
        stack<ListNode *> stk;
        ListNode *cur = dummy;
        while (cur)
        {
            stk.push(cur);
            cur = cur->next;
        }
        for (int i = 0; i < n; ++i)
        {
            stk.pop();
        }
        ListNode *prev = stk.top();
        prev->next = prev->next->next;
        ListNode *ans = dummy->next;
        delete dummy;
        return ans;
    }
};
// @lc code=end
