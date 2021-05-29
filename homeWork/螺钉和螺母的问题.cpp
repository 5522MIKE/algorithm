/*
 * @Author: MikyMing
 * @Date: 2020-10-30 09:33:25
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-30 09:44:35
 * @Description: 算法设计5.2节 11题 
 * @Analysis: 螺钉和螺母不能直接进行比较，且时间复杂度必须在nlogn，不能用暴力算法来解。只能使用分治法进行计算。
 * @FilePath: /c/螺钉和螺母的问题.cpp
 */
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//打印指定数组
void Print(int *a)
{
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

//分类函数
//n和b为两个数组
//left为左索引，right为右索引
void Fix(int *n, int *b, int left, int right)
{
    if (left < right)
    {
        int tmp = n[left];
        int i = left, j = right;
        while (i < j)
        {
            while (i < j&&b[i] < tmp)
            {
                i++;
            }
            while (i < j&&b[j] > tmp)
            {
                j--;
            }
            if (i < j)
            {
                swap(b[i], b[j]);
            }
        }
        b[i] = tmp;
        swap(b[left], b[i]);
        cout << "n+b:" << endl; Print(n); Print(b); cout << endl;
        //一趟下来，i=j的tmp的位置。以tmp为界限，左右分别是小于和大于它的元素
        tmp = b[left + 1];
        i = left + 1, j = right;
        while (i < j)
        {
            while (i < j&&n[i] < tmp)
            {
                i++;
            }
            while (i < j&&n[j] > tmp)
            {
                j--;
            }
            if (i < j)
            {
                swap(n[i], n[j]);
            }
        }
        n[i] = tmp;
        swap(n[left + 1], n[i]);
        cout << "n+b:" << endl; Print(n); Print(b); cout << endl;

        Fix(n, b, left + 2, i);
        Fix(n, b, i + 1, right);
    }
    
}

int main()
{
    int nut[9] = { 5, 9, 3, 7, 1, 8, 2, 4, 6 };
    int bolt[9] = { 7, 4, 1, 2, 5, 6, 9, 8, 3 };

    Fix(nut, bolt, 0, 8);
    return 0;
}