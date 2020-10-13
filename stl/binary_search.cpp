/*
 * @Author: MikyMing
 * @Date: 2020-10-13 23:15:27
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-13 23:17:41
 * @Description: set
 * @Analysis: set
 * @FilePath: /c/stl/binary_search.cpp
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 3, 5, 7, 10, 15, 19, 20, 22, 24, 27};
    int length = sizeof(arr) / 4;
    bool isFind = true;
    isFind = binary_search(arr + 2, arr + length, 19); //在[start, end)中进行二分查找key
    cout << isFind << endl;
}