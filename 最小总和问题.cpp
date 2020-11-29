/*
 * @Author: MikyMing
 * @Date: 2020-10-30 09:58:26
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-30 09:59:26
 * @Description: 算法8.1第八题
 * @Analysis: set
 * @FilePath: /c/最小总和问题.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f[101][101] = {0};
    int n = 0;
    int minData = INT_MAX;
    cout << "输入三角形底边数目：";
    cin >> n;
    for (int i = 0; i <= n; i++) //边缘值置无穷大
    {
        f[i][0] = INT_MAX;
        f[0][i] = INT_MAX;
    }
    cout << "输入各节点的数：" << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                cin >> f[i][j];
            else
                f[i][j] = INT_MAX;
        }
    for (int i = 2; i <= n; i++) //求各节点动态规划过程中的值
    {
        for (int j = 1; j <= i; j++)
        {
            if (f[i - 1][j - 1] < f[i - 1][j]) //找相对最小值
                f[i][j] += f[i - 1][j - 1];
            else if (f[i - 1][j - 1] > f[i - 1][j]) //找相对最小值
                f[i][j] += f[i - 1][j];
            else if (f[i - 1][j - 1] == f[i - 1][j]) //找相对最小值
                f[i][j] += f[i - 1][j];
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (f[n][i] < minData)
            minData = f[n][i];
    }
    cout << "到达底边时的最小总和为：" << minData << endl;
    return 0;
}
