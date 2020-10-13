/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:24:27
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:25:00
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/queue.cpp
 */

#include <iostream>
#include <queue> //注意包含queue头文件
using namespace std;

int main()
{
    queue<string> q;
    string s;
    q.push("hello"); //入队
    q.push("world");

    cout << q.front() << endl; //hello 获取队首元素值，但是不出队
    cout << q.back() << endl;  //world 获取队尾元素值，但是不出队

    q.pop();                   //队首元素出队
    cout << q.front() << endl; //world
    cout << "size " << q.size() << endl;
    cout << "isEmpty " << q.empty() << endl;
    return 0;
}