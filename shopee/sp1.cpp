class Solution {
public:
vector<vector<string>> res;  //记录所有符合答案
vector<string> temp;         //记录单个答案
bool check(int i,vector<int>& queen,int j){
    for(int k=0;k<queen.size();k++){
        if(j==queen[k] || queen[k]-k==j-i || j+i==k+queen[k]){ //同一列+主斜线+次斜线判断(来源于:鞍点题目中找到的规律)
            return false;
        }
    }
    return true;
}
void find(int i,vector<int>& queen,int n){
    if(n==i){                     //当递归到n说明该次方法可行
        res.emplace_back(temp);
        return ;
    }
    for(int j=0;j<n;j++){
        if(check(i,queen,j)){      //第i行的第j列是否可以放置
            //记录
            queen.emplace_back(j);      
            string tt=string(n,'.');
            tt[j]='Q';
            temp.emplace_back(tt);
            find(i+1,queen,n);     
            //回溯
            queen.pop_back();
            temp.pop_back();
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<int> queen;    // 数组记录皇后位置   i行j列
    find(0,queen,n);      // 从第0行开始递归  
    return res;
}
};




// class Solution {
// public:
//     /**
//      * Note: 类名、方法名、参数名已经指定，请勿修改
//      *
//      * 
//      * 
//      * @param n int整型  
//      * @return int整型
//      */
//     int buildHouses(int n) {
//         // write code here
//     }
// };
