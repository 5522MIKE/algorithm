/*
 * @Author: MikyMing
 * @Date: 2021-04-09 00:26:36
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-04-09 08:25:59
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/new.cpp
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int t[3];
	cin >> n;
	int arr[1000000];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	if(n%2 == 0){
		t[0] = (arr[n/2] + arr[n/2 +1])/2;
	}else{
		t[0] = arr[n/2];
	}
	t[1] = arr[0];
	t[2] = arr[n-1];
	sort(t,t+3);
	cout << t[2] << " " << t[1] << " " << t[0];
	return 0;
}



