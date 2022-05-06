/*
 * @Author: MikyMing
 * @Date: 2022-03-23 14:13:54
 * @LastEditors: MikyMing
 * @LastEditTime: 2022-03-23 14:53:18
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/important/反转链表.cpp
 */
#include<algorithm>
#include<unordered_map>
#include <iostream>
#include<vector>

using namespace std;

struct node {
    int  data;
    struct node* next;
    node(int _data) :data(_data), next(nullptr) {
    }
};

struct node* init() {
    node* head = new node(1);
    node* node1 = new node(2);
    node* node2 = new node(3);
    node* node3 = new node(4);
    node* node4 = new node(5);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    return head;
}

struct node* reverse(node* head) {
    struct node* pre = new node(-1);
    struct node* temp = new node(-1);
    pre = head;
    temp = head->next;
    pre->next = nullptr;    
    struct node* cur = new node(-1);
    cur = temp;
    while (cur != nullptr) {
        temp = cur;
        cur = cur->next;
        temp->next = pre;
        pre = temp;
    }

    return pre;
}

int main(){
    auto head = init();
    head = reverse(head);
    while (head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }

    return 0;
}
