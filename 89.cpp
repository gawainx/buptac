#include<cstdio>
int main(){
    int T,x1,y1,x2,y2;
    scanf("%d",&T);
    while(T--){
        scanf("%d:%d",&x1,&y1);
        scanf("%d:%d",&x2,&y2);
        int t1 = x1*60+y1;
        int t2 = x2*60+y2;
        int res = ((t2>=t1)?(t2-t1):(t2-t1+24*60));
        printf("%d\n",res);
    }
}