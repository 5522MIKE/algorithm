#include<bits/stdc++.h>
using namespace std;

int judge(int a)
{
    int i =0;
	while (!(a % 2))
	{
		a = a / 2;
        i++;
		if (a == 1)
		{
			return i;
		}
	}
	return -1;
}


long long GetMinCalculateCount(long long sourceX, long long sourceY, long long targetX, long long targetY) {
    long long n,m;
    n = targetX / sourceX;
    m = targetY / sourceY;
    if( targetX % sourceX == 0 && targetY % sourceY == 0 && n == m){
        return judge(n);
    }else{
        sourceX++;
        sourceY++;
        n = targetX / sourceX;
        m = targetY / sourceY;
        if( targetX % sourceX == 0 && targetY % sourceY == 0 && n == m){
            return judge(n) +1;
        }
    }
    return -1;
}


int main() {
    long long sourceX, sourceY, targetX, targetY;
    cin  >> sourceX >> sourceY >> targetX >> targetY;
    cout << GetMinCalculateCount(sourceX, sourceY, targetX, targetY) << endl;
    return 0;
}