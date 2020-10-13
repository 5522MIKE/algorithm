/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:26:13
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:26:28
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/list.cpp
 */

#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l)
{
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    l.push_front(6); //从左边入队
    l.push_front(7);
    l.push_back(8); //从右边入队
    printList(l);   //7 6 8

    cout << l.front() << endl; //7 返回左边第一个元素的值（不删除元素）
    cout << l.back() << endl;  // 8 返回有边第一个元素的值（不删除元素）
    cout << l.size() << endl;  //返回元素的总个数

    l.reverse();  //进行翻转
    printList(l); //8 6 7

    l.pop_front(); //删除左边第一个元素
    l.pop_back();  //删除右边第一个元素
    printList(l);  //6

    l.push_back(6);
    printList(l);                          //6 6
    l.remove(6);                           //删除值为6的所有元素
    cout << l.empty() << l.size() << endl; //1 0

    l.push_back(4);
    l.push_back(1);
    l.push_back(3);
    l.sort();     //排序
    printList(l); //1 3 4
}