/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:23:55
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:24:10
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/stack.cpp
 */

#include <stack> //注意包含stack头文件
#include <iostream>
using namespace std;

int main()
{
    stack<int> s; //声明stack中的类型，以及栈名称
    s.push(3);
    s.push(4);             //入栈
    int length = s.size(); //获取栈元素数量
    int top = s.top();     //获取栈顶元素（不出栈）
    s.pop();               //出栈
    bool isEmpty = s.empty();
    return 0;
}
