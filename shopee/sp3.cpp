#include<bits/stdc++.h>
using namespace std;

int MinOperations(string s) {
    int sum=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            sum++;
            if(s[i+1] == 'A'){
                s[i+1] = 'B';
            }else{
                s[i+1] = 'A';
            }
        }
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    return 0;
}