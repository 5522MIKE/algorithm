#include<iostream>
using namespace std;


int main()
{
	int n,r,b;
    int sumr=0,sumb=0;
    cin >> n >> r >> b;
    int tr=r,tb=b;
    char a[n];
    for(int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        a[i] = ch;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] == a[i+1]){
            if(a[i] == 'r'){
                r--;
                sumr++;
            }
            else{
                b--;
                sumb++;
            }
        }
    }
    if(sumr <= tr && sumb <= tb){
        cout << n+sumr+sumb;
    }else{
        cout << sumr-tr << " "<< sumb-tb;
    }
    
}
