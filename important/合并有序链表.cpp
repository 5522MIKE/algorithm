/*
 * @Author: MikyMing
 * @Date: 2022-03-23 14:00:53
 * @LastEditors: MikyMing
 * @LastEditTime: 2022-03-23 14:10:40
 * @Description: https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/
 * @Analysis: set
 * @FilePath: /algorithm/important/合并有序链表.cpp
 */
#include <iostream>
using namespace std;

struct myList {
    int val;
    myList* next;
    myList(int _val) :val(_val), next(nullptr) {}
};

myList* merge(myList* l1, myList* l2) {

    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;
    myList head(0);
    myList* node = &head;
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            node->next = l1;
            l1 = l1->next;

        }
        else {
            node->next = l2;
            l2 = l2->next;
        }
        node = node->next;
    }

    if (l1 == nullptr)
        node->next = l2;
    if (l2 == nullptr)
        node->next = l1;

    return head.next;

};

int main(void) {

    myList* node0 = new myList(0);
    myList* node1 = new myList(1);
    myList* node2 = new myList(2);
    myList* node3 = new myList(3);

    myList* node4 = new myList(1);
    myList* node5 = new myList(4);
    node0->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = nullptr;
    node4->next = node5;
    node5->next = nullptr;

    auto node = merge(node0, node4);
    while (node != nullptr) {
        cout << node->val << endl;
        node = node->next;
    }

    return 0;
}
