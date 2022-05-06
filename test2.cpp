/*
 * @Author: MikyMing
 * @Date: 2022-03-24 20:00:53
 * @LastEditors: MikyMing
 * @LastEditTime: 2022-03-24 20:18:10
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/test2.cpp
 */
// #include <iostream>
// using namespace std;

// 输入n个数并找出最相近的两个数之差
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, min;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = abs(a[0] - a[1]);
    sort(a, a + n);
    for (int i = 1; i < n - 1; i++)
        if (abs(a[i] - a[i + 1]) < min)
            min = abs(a[i] - a[i + 1]);
    cout << min << endl;
    return 0;
}