# include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            mp[i] = temp;
        }
        for(int j=0;j<m;j++){
            char c;
            cin >> c;
            if(c=='Q'){
                int a,b;
                int top = 0;
                cin >> a >> b;
                if(a<b){
                    for(int k=a;k<=b;k++){
                        if(mp[k]>top){
                            top = mp[k];
                        }
                    }
                }else{
                    for(int k=b;k<=a;k++){
                        if(mp[k]>top){
                            top = mp[k];
                        }
                    }
                }
                cout << top <<endl;
            }else{
                int a,b;
                cin >> a >> b;
                mp[a] = b;
            }
        }
    }
    return 0;
}