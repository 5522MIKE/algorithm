#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    int sum = 0;
    cin >> m >> n;
    queue<int> q;
    map<int,int> mp;
    int t;
    cin >> t;
    q.push(t);
    mp[t] = 1;
    sum++;
    for(int i=1;i<n;i++){
        int temp;
        cin >> temp;
        if(mp[temp] != 1){
            if(q.size() == m){
                int top = q.front();
                mp[top] = 0;
                q.pop();
            }
            q.push(temp);
            mp[temp] = 1;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}