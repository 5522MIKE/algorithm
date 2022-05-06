#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    n *= 4;
    int t=1;
    for(int i=0;i<n;i++){
        if(i < (n-n/4)){
            for(int j=0;j<n;j++){
                if(j<n/4 || j>=(n-n/4)){
                    cout << '*';
                }else{
                    cout << '.';
                }
            }
        }else{
            for(int j=0;j<n;j++){
                if(j<n/4+t && j>=t || j<n-t && j>=(n-n/4-t)){
                    cout << '*';
                }else{
                    cout << '.';
                }
            }
            ++t;
        }
        cout << endl;
    }
    return 0;
}