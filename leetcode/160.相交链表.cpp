/*
 * @Author: MikyMing
 * @Date: 2021-05-08 06:27:33
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-05-08 06:36:20
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/leetcode/160.相交链表.cpp
 */
/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *A = headA, *B = headB;
        while (A != B) {
            A = A != nullptr ? A->next : headB;
            B = B != nullptr ? B->next : headA;
        }
        return A;
    }
};

// @lc code=end

