/*
 * @Author: MikyMing
 * @Date: 2020-10-08 10:07:12
 * @LastEditors: MikyMing
 * @LastEditTime: 2020-10-08 10:57:24
 * @Description: 八皇后问题 算法设计与分析3.4节第九题
 * @Analysis: 直接对完整八皇后问题进行分析。其中的3个问题都已经包括在内了。
 * @FilePath: /c/八皇后问题.cpp
 */

#include<bits/stdc++.h>
using namespace std;

int x[10],sum=0;
//检查是否符合规则。i代表当前的行 
bool check(int i){
	for(int g=i-1;g>0;--g)//这个地方需要注意是对前面的i-1行进行判断 
	{
		if(x[g]==x[i]||(abs(x[i]-x[g])==abs(i-g))) 
			return	false; 
	} 
	return true;
} 
void dfs(int num){
	if(num==8)
	{
		++sum;
		return ;
	} 
	else
	{
		for(int j=1;j<=8;++j)//一共只有8列，我们一个一个的进行赋值
		{
			x[num+1]=j;
			if(check(num+1))//判断是否符合条件 
				dfs(num+1);  
		} 
	} 
} 
int main(){
	dfs(0);//一开始没有填入一行，那肯定从0开始 
	printf("%d\n",sum); 
	return 0;
}