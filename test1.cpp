/*
 * @Author: MikyMing
 * @Date: 2020-10-08 09:53:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-09 00:25:25
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/test1.cpp
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a,b,c,d;
	int flag = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		if(i%7 == 0){
			i--;
		}else{
			if(flag == 0){
				a++;
				flag = 1;
			}else if (flag == 1)
			{
				b++;
				flag = 2;
			}else if (flag == 2)
			{
				c++;
				flag = 3;
			}else if (flag == 3)
			{
				d++;
				flag = 0;
			}
		}
	}
	cout << a;
	cout << b;
	cout << c;
	cout << d;
	return 0;
}


