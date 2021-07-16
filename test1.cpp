/*
 * @Author: MikyMing
 * @Date: 2020-10-08 09:53:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-16 17:48:36
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/test1.cpp
 */
#include <bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
        int sum=0;
        int b = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        int a = (nums.size()+1)*nums.size()/2 - sum;
        return a;
}

int main()
{
    int num;
    cin >> num;
    int sum=0;
    do
    {
        sum = num/10 + num%10;
        cout << sum << endl;
        num = sum;
    } while (sum==2);
    return sum;
}
