/*
 * @Author: MikyMing
 * @Date: 2020-10-13 21:36:59
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-09 08:14:11
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/stl/sort.cpp
 */

// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 9, 8, 4, 3, 6, 0, 11};
    // char arr1[] = {'1','2'};
    // int length = sizeof(arr1);
    int length = sizeof(arr) / 4;
    cout << "length:" << length << endl;
    //快速排序
    //sort的排序范围是[start, end)，默认使用从小到大排序。
    sort(arr, arr + 3); //只排序前3个
    sort(arr + 2, arr + length);             //排序第2个元素之后的元素。
    sort(arr, arr + length);                 //排序整个数组
    sort(arr, arr + length, greater<int>()); //从大到小排序整个数组
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}