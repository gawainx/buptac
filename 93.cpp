//测试中序遍历序列
#include<cstdio>
#include<cstring>
int buf[405];
int main(){
    int T,N;
    scanf("%d",&T);
    while(T--){
        memset(buf,0,sizeof(buf));
        scanf("%d",&N);
        int flag=1;// Yes
        for(int i=0;i<N;i++){
            scanf("%d",&buf[i]);
        }
        if(N==1){
            puts("Yes");
            continue;
        }else{
            for(int i=0;i<N-1;i++){
            if(buf[i]<buf[i+1]) continue;
            else{
                flag = 0;
                break;
            }
        }
        }
        if(flag){
            puts("Yes");
        }else{
            puts("No");
        }
    }
}