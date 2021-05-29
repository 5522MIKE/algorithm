/*
 * @Author: MikyMing
 * @Date: 2020-10-08 10:02:40
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-08 10:38:29
 * @Description: 算法设计与分析3.1节第十四题
 * @Analysis: 将白色碟子设为0，黑色设为1，然后执行冒泡排序
 * @FilePath: /c/交替放置的碟子.cpp
 */

#include<bits/stdc++.h>
using namespace std;

// 冒泡排序
void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    int arr[8] = {1,0,1,0,1,0,1,0};
    BubbleSort(arr,8);
    for(int i=0;i < 8;i++){
        cout<<arr[i];
    }
    return 0;
}