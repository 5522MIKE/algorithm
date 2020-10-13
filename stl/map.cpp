/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:29:04
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:29:16
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/map.cpp
 */

#include <iostream>
#include <map> //multimap和map都要包含set头文件
using namespace std;

int main()
{
    map<string, string> m;
    m["one"] = "hello";
    m["two"] = "world";
    m.insert(pair<string, string>("three", "C++"));

    bool isEmpty = m.empty();
    int length = m.size();
    string s = m["one"]; //找到的话，就返回对应的值
    cout << s << endl;   // hello
    s = m["four"];       //未找到的话，就返回一个类型零值
    cout << s << endl;   //返回空字符串

    map<string, string>::iterator p;
    p = m.find("one");
    cout << p->second << endl; //输出one对应的值--> hello

    m.erase(p); //删除某个key
    for (p = m.begin(); p != m.end(); p++)
    {
        cout << p->second << " "; // C++ world
    }

    m.clear(); //清空map
    return 0;
}