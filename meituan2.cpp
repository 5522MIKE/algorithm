#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    int sum = 0;
    if(n % 2 == 1){
    for(int i = 0; i < n/2;i++){
        if(a[i+1] <= a[i]){
            sum += a[i]-a[i+1]+1;
        }
    }
    for(int i = n-1; i > n/2+1; i--){
        if(a[i-1] <= a[i]){
            sum += a[i]-a[i-1]+1;
        }
    }
    }else{
    for(int i = 0; i < n/2-1;i++){
        if(a[i+1] <= a[i]){
            sum += a[i]-a[i+1]+1;
        }
    }
    for(int i = n-1; i > n/2; i--){
        if(a[i-1] <= a[i]){
            sum += a[i]-a[i-1]+1;
        }
    }
    }
    
    cout << sum;
}
