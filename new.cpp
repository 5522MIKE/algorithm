/*
 * @Author: MikyMing
 * @Date: 2021-04-09 00:26:36
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-10 00:45:19
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/new.cpp
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, t, x1, y1, x2, y2;
	cin >> n >> k >> t >> x1 >> y1 >> x2 >> y2;
	int x, y, a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		int temp1 = 0;
		for (int j = 0; j < t; j++)
		{
			cin >> x >> y;
			if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
			{
				temp1++;
				temp = temp1;
			}
			else
			{
				temp1 = 0;
			}
		}
		if (temp >= k)
		{
			a++;
			b++;
		}
		else if (temp < k && temp > 0)
		{
			a++;
		}
	}
	cout << a << endl;
	cout << b << endl;
	return 0;
}