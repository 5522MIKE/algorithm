#include<iostream>

using namespace std;


int main()
{
    int n,sum;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum/3;
}