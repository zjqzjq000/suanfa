#include<iostream>
#include<cstring>

using namespace std;

const int N=110;

int main(){
    string g[N];//ÿ�����̿���һ���ַ���
    int n;
    cin>>n;//������
    
    for(int i=0;i<n;i++){
        string line;//ÿһ���ַ���
        for(int j=0;j<8;j++){
            cin>>line;
            g[i]+=line;//��8��ƴ��1��
        }
        
        int cnt=0;
        for(int j=0;j<i;j++){//�ж�ÿһ������ǰ���ж��ٸ�������ͬ��
            if(g[j]==g[i]) cnt++;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
