#include <cstdio>
#include <cstring>
//Hash 法
int buf[105];
int count[105];
int main(){
    int T,N;
    int num = 0;
    scanf("%d",&T);
    while(T--){
        num = 0;
        memset(count,0,sizeof(count));
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&buf[i]);
            count[buf[i]]++;
        }
        for(int i=1;i<105;i++){
            if(count[i]>=3)
                num++;
        }
        printf("%d\n",num);
    }
}