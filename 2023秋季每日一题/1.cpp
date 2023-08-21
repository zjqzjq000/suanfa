#include<iostream>
#include<cstring>

using namespace std;

const int N=110;

int main(){
    string g[N];//每个棋盘看成一个字符串
    int n;
    cin>>n;//棋盘数
    
    for(int i=0;i<n;i++){
        string line;//每一行字符串
        for(int j=0;j<8;j++){
            cin>>line;
            g[i]+=line;//把8行拼成1行
        }
        
        int cnt=0;
        for(int j=0;j<i;j++){//判断每一个棋盘前面有多少个和他相同的
            if(g[j]==g[i]) cnt++;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
