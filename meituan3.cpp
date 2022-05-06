#include<iostream>
#include<cstring>
using namespace std;

// 计算字符串的子串
int count_substr(char* substr,char* str){
    int len1 = strlen(substr);
    int len2 = strlen(str);
    int count = 0;
    for(int i = 0; i < len2-len1+1; i++){
        int flag = 1;
        for(int j = 0; j < len1; j++){
            if(substr[j] != str[i+j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            count++;
        }
    }
    return count;
}

int main()
{
    char str[5000];
    char substr[100];
    cout << count_substr(substr, str)+3;
}
