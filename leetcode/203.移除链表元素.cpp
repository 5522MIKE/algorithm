/*
 * @Author: MikyMing
 * @Date: 2021-07-09 18:02:12
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-09 18:02:48
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/203.移除链表元素.cpp
 */
/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) {
            return head;
        }
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};
// @lc code=end

