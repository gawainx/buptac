#include <cstdio>
#define ISYEAP(x) ((x%100!=0)&&(x%4==0))||(x%400==0)?1:0
int daysOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int yy,mm,dd;
        int days=0;
        scanf("%d:%d:%d",&yy,&mm,&dd);
        if(mm==1){
            days = dd;//special situation
        }else{
            for(int i = 1;i<mm;i++){
                days+=daysOfMonth[i];
            }
            days+=dd;
            if((mm>2)&&((bool)ISYEAP(yy))){
                days++;
            }
        }
        printf("%d\n",days);
    }
}