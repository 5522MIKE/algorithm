/*
 * @Author: MikyMing
 * @Date: 2020-10-08 09:53:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-13 19:05:07
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
    int b[3]={0,1,2};
    vector<int> nums(b,b+3);
    cout << missingNumber(nums) << endl;
}
