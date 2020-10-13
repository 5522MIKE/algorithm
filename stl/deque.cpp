/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:25:25
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:25:44
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/deque.cpp
 */

#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> &dq)
{
    for (deque<int>::iterator begin = dq.begin(); begin != dq.end(); begin++)
    {
        cout << *begin << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(6);
    dq.push_front(8);
    dq.push_front(7);
    printDeque(dq); //7 8 5 6

    dq.pop_back();
    dq.pop_front();
    printDeque(dq); // 8 5

    cout << dq.front() << endl; // 8
    cout << dq.back() << endl;  // 5

    dq.insert(dq.begin() + 1, 9);
    printDeque(dq); //8 9 5

    dq.insert(dq.begin(), 5, 88);
    printDeque(dq);                        // 88 88 88 88 88 8 9 5
    cout << "size：" << dq.size() << endl; //8
}