#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n],r[n];
    int bt=0,rt=0;
    map<int,int> mpr;
    int temp;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        char ch;
        cin >> ch;
        if(ch == 'B'){
            b[bt] = a[i];
            bt++;
        }else{
            r[rt] = a[i];
            temp = r[rt];
            rt++;
            mpr[temp]++;
        }
    }
    int sum=0;
    for(int i=0;i<bt;i++){
        temp = b[i];
        if(mpr[temp] > 0){
            sum += mpr[temp];
        }
    }
    cout << sum;
    // for(int i=0;i<rt;i++){
    //     cout << r[i];
    // }
    return 0;
}