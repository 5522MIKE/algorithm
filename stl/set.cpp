/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:27:01
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:28:56
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/set.cpp
 */

// #include <iostream>
// #include <set> //multiset和set都要包含set头文件
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {5, 1, 2, 4, 6, 4, 3, 5, 8, 8}; //有重复的元素
    int i;
    multiset<int> ms; //创建一个空格multiset集合
    for (i = 0; i < 10; i++)
    {
        ms.insert(arr[i]);
    }

    multiset<int>::iterator p; //声明一个迭代器，类似于指针
    for (p = ms.begin(); p != ms.end(); p++)
    {
        //ms.begin()  返回一个迭代器，指向multiset的第一个元素
        //ms.end()   返回一个迭代器，指向multiset最后一个元素的后面一个位置
        cout << *p << " "; //1 2 3 4 4 5 5 6 8 8
    }
    cout << endl;
    int length = ms.size();                                 //集合中元素的数量
    bool isEmpty = ms.empty();                              // 集合是否为空
    int cnt = ms.count(8);                                  //计算一个数出现的次数
    cout << length << " " << isEmpty << " " << cnt << endl; // 10  0   2

    //查找元素，如果找到的话，返回一个迭代器指向找到的元素。如果没有找到的话，就返回multiset中元素总个数size
    p = ms.find(8);
    if (*p != ms.size())
    {
        cout << "found " << *p << endl; //8
        ms.erase(*p);                   //删除集合中所有的8，不是只删除一个。
        cout << "after delete , the size is " << ms.size() << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}