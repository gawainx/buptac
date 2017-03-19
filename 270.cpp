#include <cstdio>
#include <cstring>
int count[101];
int buf[100] = {0};
//之前很久没 A 的一个简单题,错误的地方在于计数数组的初始化,每次循环的时候都应该进行一次的.
//初始化方法最保险是用 memset 函数
int main()
{
    
    int T,n;
    scanf("%d",&T);
    while(T--){
        memset(count,0,sizeof(count));
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&buf[i]);
        int tmp = buf[0],calc = 0;
        if(n == 1){
            printf("%d\n",buf[0]);
        }else{
            for(int i=0;i<n;i++){
            if(buf[i]==tmp){
                calc++;
                if((i==n-1)&&(count[calc]==0)){
                    count[calc] = tmp;
                }
            }
            else{
                //tmp != buf[i]
                if(count[calc]==0){
                    count[calc] = tmp;
                    //printf("tmp:%d calc:%d buf:%d\n",tmp,calc,buf[i]);
                }
                calc = 1;
                tmp = buf[i];
            }
        }
        for(int i=100;i>0;i--){
            if(count[i]!=0){
                printf("%d\n",count[i]);
                break;
            }
        }
        }
    }
}