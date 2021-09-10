/*
 * @Author: MikyMing
 * @Date: 2021-09-10 18:22:00
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-09-10 18:48:03
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/dataStructure/插入排序.cpp
 */
#include <iostream>

using namespace std;

void InsertSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            temp = arr[i];
            for (j = i - 1; temp < arr[j]; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 4};
    int arrLen = end(arr) - begin(arr);
    InsertSort(arr, arrLen);
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i];
    }
    return 0;
}
