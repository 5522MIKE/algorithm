/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:21:17
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-14 09:53:43
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/vector.cpp
 */

// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator begin = v.begin(); begin != v.end(); begin++)
    {
        cout << *begin << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    cout << "isEmpty：" << v.empty() << endl;
    v.push_back(9); //在数组的最后添加一个元素
    v.push_back(12);
    v.push_back(15);
    cout << "Size：" << v.size() << endl; // 3

    v.pop_back();   //删除最后一个元素
    printVector(v); //输出 9 12

    cout << "v[1] = " << v.at(1) << endl; // v[1] = 12

    v.insert(v.begin() + 1, 99);    // 在第v[1]位置插入99元素
    v.insert(v.begin() + 1, 5, 88); //从v[1]开始，插入5个88
    printVector(v);                 //9 88 88 88 88 88 99 12

    v.erase(v.begin()); //删除第i个数
    printVector(v);     //88 88 88 88 88 99 12

    cout << "first：" << v.front() << endl;
}
