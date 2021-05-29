/*
 * @Author: MikyMing
 * @Date: 2020-10-08 09:51:54
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-08 10:25:11
 * @Description: 假设每一步可以爬一格或者两格梯子，爬一部n格梯子一共可以用几种方法？ 算法设计与分析2.5节第三题
 * @Analysis: 其实可以看成是一个斐波那契数列，
 *            每次只能爬1步或2步，爬到第n层的方法要么是从第n-1层1步上来的，要不就是从n-2层2步上来的。
 *            所以可以用递归的方法或者动态规划来做。
 * @FilePath: /c/爬梯子.cpp
 */

#include<bits/stdc++.h>
using namespace std;

// 递归 时间复杂度过高
/*  简介：
    &&是逻辑与运算符，||是逻辑或运算符，都是逻辑运算符，两边只能是bool类型
    &与| 既可以进行逻辑运算，又可以进行位运算，两边既可以是bool类型，又可以是数值类型

    区别：
    if (A && B) 如果 A 为 false ，整个表达式就为 false，不再计算 B 的值了。
    if (A & B) 如果 A 为 false ，整个表达式就为 false，但还要计算 B 的值。
    if (A && B++) 如果A 为 false，&&不会再计算后面的值
    if (A & B++) 如果A 为 false，&则会计算后面的值
*/
int recursion(int n) {
    
    if (n < 0)
        return 0;
    if (n == 1 | n == 0)
        return 1;
    int steps = 0;
    steps = recursion(n-1) + recursion(n-2);
    return steps;
}

// 动态规划 正解
int DP(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    vector<int> vec(n+1);
    vec[0] = 1;
    vec[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        vec[i] = vec[i-1] + vec[i-2];
    }
    return vec[n];
}

int main(){
    int n;
    cin >> n;
    cout << DP(n) <<endl;
    // cout << recursion(n) << endl;
    return 0;
}
